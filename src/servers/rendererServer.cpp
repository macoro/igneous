#include "rendererServer.h"

#include <bigg.hpp>
#include <pcil/pcil.hpp>
#include <stb_image.h>

#include "../util/log.h"

RendererServer::RendererServer()
{
	IG_CORE_INFO("Initializing Renderer Server");
	static SplashVertex s_splashVertices[] =
	{
		{ -1.0f,  1.0f, 0.0f, 0.0f, 0.0f },
		{ 1.0f,  1.0f, 0.0f, 1.0f, 0.0f },
		{ -1.0f, -1.0f, 0.0f, 0.0f, 1.0f },
		{ 1.0f, -1.0f, 0.0f, 1.0f, 1.0f },
	};
	static const uint16_t s_splashTriList[] = { 2, 1, 0, 2, 3, 1 };

	SplashVertex::init();

	bgfx::ProgramHandle splashProgram = loadProgram("vs_splash", "fs_splash");
	bgfx::UniformHandle s_splash = bgfx::createUniform("s_splash", bgfx::UniformType::Int1);
	bgfx::TextureHandle splashTexture = loadTexture("res/textures/splash.png", BGFX_TEXTURE_U_CLAMP | BGFX_TEXTURE_V_CLAMP);

	bgfx::setVertexBuffer(0, bgfx::createVertexBuffer(bgfx::makeRef(s_splashVertices, sizeof(s_splashVertices)), SplashVertex::ms_decl));
	bgfx::setIndexBuffer(bgfx::createIndexBuffer(bgfx::makeRef(s_splashTriList, sizeof(s_splashTriList))));
	bgfx::setTexture(0, s_splash, splashTexture);
	bgfx::setState(BGFX_STATE_DEFAULT);
	bgfx::submit(0, splashProgram);
	bgfx::frame();
	bgfx::destroy(splashTexture);
	bgfx::destroy(s_splash);
	bgfx::destroy(splashProgram);
	IG_CORE_INFO("Renderer Server Initialized");
}

RendererServer& RendererServer::getInstance() {
	static RendererServer instance;
	return instance;
}

std::string RendererServer::getSupportedRenderers()
{
	std::string supportedRenderers = "Supported Renderers: ";
	bgfx::RendererType::Enum rendererTypes[bgfx::RendererType::Count];
	uint8_t num = bgfx::getSupportedRenderers(bgfx::RendererType::Count, rendererTypes);

	for (uint8_t i = 0; i < num; i++)
	{
		supportedRenderers += bgfx::getRendererName(rendererTypes[i]);
		supportedRenderers += i != num - 1 ? ", " : "";
	}

	return supportedRenderers;
}

std::string RendererServer::getGpuInfo()
{
	const bgfx::Caps* caps = bgfx::getCaps();
	std::string gpuInfo = "Number of GPUs: " + std::to_string(caps->numGPUs) + "\n";
	std::string isSelected;

	for (uint8_t i = 0; i < caps->numGPUs; i++)
	{
		isSelected = caps->deviceId == caps->gpu[i].deviceId ? "(Selected)" : "          ";
		gpuInfo += "GPU[" + std::to_string(i) + "]" + isSelected + "| Vendor: " + std::to_string(caps->gpu[i].vendorId) + " \"" + pcil::vendorLookup(caps->gpu[i].vendorId) + "\" | Device ID: " + std::to_string(caps->gpu[i].deviceId) + " \"" + pcil::deviceLookup(caps->gpu[i].vendorId, caps->gpu[i].deviceId) + "\"";
		gpuInfo += i < caps->numGPUs - 1 ? "\n" : "";
	}

	return gpuInfo;
}

bgfx::TextureHandle RendererServer::loadTexture(const char* _filePath, uint32_t _flags)
{
	bgfx::TextureHandle handle = BGFX_INVALID_HANDLE;

	int width, height;
	stbi_uc* data = stbi_load(_filePath, &width, &height, 0, 4);
	handle = bgfx::createTexture2D((uint16_t)width, (uint16_t)height, false, 1, bgfx::TextureFormat::RGBA8, _flags, bgfx::copy(data, width * height * sizeof(stbi_uc*)));
	stbi_image_free(data);

	if (bgfx::isValid(handle))
	{
		bgfx::setName(handle, _filePath);
	}

	return handle;
}

bgfx::ProgramHandle RendererServer::loadProgram(const char* vs, const char* fs)
{
	char vsName[512];
	char fsName[512];

	const char* shaderPath = "???";

	switch (bgfx::getRendererType())
	{
	case bgfx::RendererType::Noop:
	case bgfx::RendererType::Direct3D9:  shaderPath = "shaders/dx9/";   break;
	case bgfx::RendererType::Direct3D11:
	case bgfx::RendererType::Direct3D12: shaderPath = "shaders/dx11/";  break;
	case bgfx::RendererType::Gnm:                                       break;
	case bgfx::RendererType::Metal:      shaderPath = "shaders/metal/"; break;
	case bgfx::RendererType::OpenGL:     shaderPath = "shaders/glsl/";  break;
	case bgfx::RendererType::OpenGLES:   shaderPath = "shaders/essl/";  break;
	case bgfx::RendererType::Vulkan:                                    break;
	case bgfx::RendererType::Count:                                     break;
	}

	bx::strCopy(vsName, BX_COUNTOF(vsName), shaderPath);
	bx::strCat(vsName, BX_COUNTOF(vsName), vs);
	bx::strCat(vsName, BX_COUNTOF(vsName), ".bin");

	bx::strCopy(fsName, BX_COUNTOF(fsName), shaderPath);
	bx::strCat(fsName, BX_COUNTOF(fsName), fs);
	bx::strCat(fsName, BX_COUNTOF(fsName), ".bin");

	return bigg::loadProgram(vsName, fsName);
}

RendererServer::~RendererServer()
{
	IG_CORE_INFO("Shutingdown Renderer Server");
	IG_CORE_INFO("Renderer Server Shutdown");
}

bgfx::VertexDecl RendererServer::SplashVertex::ms_decl;