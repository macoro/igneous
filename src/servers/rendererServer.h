#pragma once

#include <bgfx/bgfx.h>
#include <bimg/bimg.h>
#include <bx/file.h>

class RendererServer
{
public:
	static RendererServer& getInstance();

	const char* getVendorName();
	const char* getDeviceName();

	bgfx::TextureHandle loadTexture(const char* _filePath, uint32_t _flags);
	bgfx::ProgramHandle loadProgram(const char* vs, const char* fs);

	RendererServer(RendererServer const&) = delete;
	void operator=(RendererServer const&) = delete;
private:
	RendererServer();
	~RendererServer() {}

	struct SplashVertex
	{
		float x;
		float y;
		float z;
		float tex_x;
		float tex_y;
		static void init()
		{
			ms_decl
				.begin()
				.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
				.add(bgfx::Attrib::TexCoord0, 2, bgfx::AttribType::Float)
				.end();
		}
		static bgfx::VertexDecl ms_decl;
	};
};