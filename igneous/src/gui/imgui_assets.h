// This file is autogenerated.

#pragma once

#include <bgfx/bgfx.h>

#define _getShader(name)                                             \
static const unsigned char* name()                                   \
{                                                                    \
	switch ( bgfx::getRendererType() )                               \
	{                                                                \
		case bgfx::RendererType::Noop:                               \
		case bgfx::RendererType::Direct3D9:  return name##_dx9;      \
		case bgfx::RendererType::Direct3D11:                         \
		case bgfx::RendererType::Direct3D12: return name##_dx11;     \
		case bgfx::RendererType::OpenGL:     return name##_glsl;     \
		case bgfx::RendererType::OpenGLES:   return name##_essl;     \
		case bgfx::RendererType::Gnm:        return NULL;            \
		case bgfx::RendererType::Metal:      return name##_metal;    \
		case bgfx::RendererType::Nvn:        return NULL;            \
		case bgfx::RendererType::Vulkan:     return NULL;            \
		case bgfx::RendererType::Count:      return NULL;            \
	}                                                                \
	return NULL;                                                     \
}                                                                    \
static const int name##_len()                                        \
{                                                                    \
	switch ( bgfx::getRendererType() )                               \
	{                                                                \
		case bgfx::RendererType::Noop:                               \
		case bgfx::RendererType::Direct3D9:  return name##_dx9_len;  \
		case bgfx::RendererType::Direct3D11:                         \
		case bgfx::RendererType::Direct3D12: return name##_dx11_len; \
		case bgfx::RendererType::OpenGL:     return name##_glsl_len; \
		case bgfx::RendererType::OpenGLES:   return name##_essl_len; \
		case bgfx::RendererType::Gnm:        return 0;               \
		case bgfx::RendererType::Metal:      return name##_metal_len;\
		case bgfx::RendererType::Nvn:        return 0;               \
		case bgfx::RendererType::Vulkan:     return 0;               \
		case bgfx::RendererType::Count:      return 0;               \
	}                                                                \
	return 0;                                                        \
}

static const int fs_imgui_glsl_len = 186;
static const unsigned char fs_imgui_glsl[] = {
	0x46,0x53,0x48,0x06,0x01,0x83,0xF2,0xE1,0x00,0x00,0x00,0x00,0x01,0x00,0x05,0x73,0x5F,0x74,0x65,0x78,0x00,0x01,0x00,0x00,0x01,
	0x00,0x9A,0x00,0x00,0x00,0x76,0x61,0x72,0x79,0x69,0x6E,0x67,0x20,0x76,0x65,0x63,0x34,0x20,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,
	0x30,0x3B,0x0A,0x76,0x61,0x72,0x79,0x69,0x6E,0x67,0x20,0x76,0x65,0x63,0x32,0x20,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,
	0x64,0x30,0x3B,0x0A,0x75,0x6E,0x69,0x66,0x6F,0x72,0x6D,0x20,0x73,0x61,0x6D,0x70,0x6C,0x65,0x72,0x32,0x44,0x20,0x73,0x5F,0x74,
	0x65,0x78,0x3B,0x0A,0x76,0x6F,0x69,0x64,0x20,0x6D,0x61,0x69,0x6E,0x20,0x28,0x29,0x0A,0x7B,0x0A,0x20,0x20,0x67,0x6C,0x5F,0x46,
	0x72,0x61,0x67,0x43,0x6F,0x6C,0x6F,0x72,0x20,0x3D,0x20,0x28,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x32,0x44,0x20,0x28,0x73,0x5F,
	0x74,0x65,0x78,0x2C,0x20,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x29,0x20,0x2A,0x20,0x76,0x5F,0x63,0x6F,0x6C,
	0x6F,0x72,0x30,0x29,0x3B,0x0A,0x7D,0x0A,0x0A,0x00,0x00
};

static const int fs_imgui_essl_len = 186;
static const unsigned char fs_imgui_essl[] = {
	0x46,0x53,0x48,0x06,0x01,0x83,0xF2,0xE1,0x00,0x00,0x00,0x00,0x01,0x00,0x05,0x73,0x5F,0x74,0x65,0x78,0x00,0x01,0x00,0x00,0x01,
	0x00,0x9A,0x00,0x00,0x00,0x76,0x61,0x72,0x79,0x69,0x6E,0x67,0x20,0x76,0x65,0x63,0x34,0x20,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,
	0x30,0x3B,0x0A,0x76,0x61,0x72,0x79,0x69,0x6E,0x67,0x20,0x76,0x65,0x63,0x32,0x20,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,
	0x64,0x30,0x3B,0x0A,0x75,0x6E,0x69,0x66,0x6F,0x72,0x6D,0x20,0x73,0x61,0x6D,0x70,0x6C,0x65,0x72,0x32,0x44,0x20,0x73,0x5F,0x74,
	0x65,0x78,0x3B,0x0A,0x76,0x6F,0x69,0x64,0x20,0x6D,0x61,0x69,0x6E,0x20,0x28,0x29,0x0A,0x7B,0x0A,0x20,0x20,0x67,0x6C,0x5F,0x46,
	0x72,0x61,0x67,0x43,0x6F,0x6C,0x6F,0x72,0x20,0x3D,0x20,0x28,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x32,0x44,0x20,0x28,0x73,0x5F,
	0x74,0x65,0x78,0x2C,0x20,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x29,0x20,0x2A,0x20,0x76,0x5F,0x63,0x6F,0x6C,
	0x6F,0x72,0x30,0x29,0x3B,0x0A,0x7D,0x0A,0x0A,0x00,0x00
};

static const int fs_imgui_dx9_len = 236;
static const unsigned char fs_imgui_dx9[] = {
	0x46,0x53,0x48,0x06,0x01,0x83,0xF2,0xE1,0x00,0x00,0x00,0x00,0x01,0x00,0x05,0x73,0x5F,0x74,0x65,0x78,0x30,0x01,0x00,0x00,0x01,
	0x00,0xCC,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFE,0xFF,0x1F,0x00,0x43,0x54,0x41,0x42,0x1C,0x00,0x00,0x00,0x4F,0x00,0x00,0x00,
	0x00,0x03,0xFF,0xFF,0x01,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x48,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x03,
	0x00,0x00,0x00,0x01,0x00,0x02,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x5F,0x74,0x65,0x78,0x00,0xAB,0xAB,0x04,0x00,
	0x0C,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x73,0x5F,0x33,0x5F,0x30,0x00,0x4D,0x69,0x63,0x72,
	0x6F,0x73,0x6F,0x66,0x74,0x20,0x28,0x52,0x29,0x20,0x48,0x4C,0x53,0x4C,0x20,0x53,0x68,0x61,0x64,0x65,0x72,0x20,0x43,0x6F,0x6D,
	0x70,0x69,0x6C,0x65,0x72,0x20,0x31,0x30,0x2E,0x31,0x00,0xAB,0x1F,0x00,0x00,0x02,0x0A,0x00,0x00,0x80,0x00,0x00,0x0F,0x90,0x1F,
	0x00,0x00,0x02,0x05,0x00,0x00,0x80,0x01,0x00,0x03,0x90,0x1F,0x00,0x00,0x02,0x00,0x00,0x00,0x90,0x00,0x08,0x0F,0xA0,0x42,0x00,
	0x00,0x03,0x00,0x00,0x0F,0x80,0x01,0x00,0xE4,0x90,0x00,0x08,0xE4,0xA0,0x05,0x00,0x00,0x03,0x00,0x08,0x0F,0x80,0x00,0x00,0xE4,
	0x80,0x00,0x00,0xE4,0x90,0xFF,0xFF,0x00,0x00,0x00,0x00
};

static const int fs_imgui_dx11_len = 423;
static const unsigned char fs_imgui_dx11[] = {
	0x46,0x53,0x48,0x06,0x01,0x83,0xF2,0xE1,0x00,0x00,0x00,0x00,0x01,0x00,0x05,0x73,0x5F,0x74,0x65,0x78,0x30,0x01,0x00,0x00,0x01,
	0x00,0x84,0x01,0x00,0x00,0x44,0x58,0x42,0x43,0x61,0x82,0x96,0x5A,0x6E,0x93,0xED,0x8E,0xB3,0x8E,0xE2,0x6C,0xAE,0x9F,0x04,0x7F,
	0x01,0x00,0x00,0x00,0x84,0x01,0x00,0x00,0x03,0x00,0x00,0x00,0x2C,0x00,0x00,0x00,0xA0,0x00,0x00,0x00,0xD4,0x00,0x00,0x00,0x49,
	0x53,0x47,0x4E,0x6C,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
	0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x5C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x53,0x56,0x5F,0x50,0x4F,0x53,0x49,0x54,0x49,0x4F,0x4E,0x00,0x43,
	0x4F,0x4C,0x4F,0x52,0x00,0x54,0x45,0x58,0x43,0x4F,0x4F,0x52,0x44,0x00,0xAB,0x4F,0x53,0x47,0x4E,0x2C,0x00,0x00,0x00,0x01,0x00,
	0x00,0x00,0x08,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x0F,0x00,0x00,0x00,0x53,0x56,0x5F,0x54,0x41,0x52,0x47,0x45,0x54,0x00,0xAB,0xAB,0x53,0x48,0x44,0x52,0xA8,0x00,0x00,0x00,
	0x40,0x00,0x00,0x00,0x2A,0x00,0x00,0x00,0x5A,0x00,0x00,0x03,0x00,0x60,0x10,0x00,0x00,0x00,0x00,0x00,0x58,0x18,0x00,0x04,0x00,
	0x70,0x10,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x00,0x00,0x62,0x10,0x00,0x03,0xF2,0x10,0x10,0x00,0x01,0x00,0x00,0x00,0x62,0x10,
	0x00,0x03,0x32,0x10,0x10,0x00,0x02,0x00,0x00,0x00,0x65,0x00,0x00,0x03,0xF2,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x68,0x00,0x00,
	0x02,0x01,0x00,0x00,0x00,0x45,0x00,0x00,0x09,0xF2,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x10,0x10,0x00,0x02,0x00,0x00,0x00,
	0x46,0x7E,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x10,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x05,0xF2,0x00,0x10,0x00,0x00,
	0x00,0x00,0x00,0x46,0x0E,0x10,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x07,0xF2,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x0E,
	0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x1E,0x10,0x00,0x01,0x00,0x00,0x00,0x3E,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00
};

static const int fs_imgui_metal_len = 560;
static const unsigned char fs_imgui_metal[] = {
	0x46,0x53,0x48,0x06,0x01,0x83,0xF2,0xE1,0x00,0x00,0x00,0x00,0x01,0x00,0x05,0x73,0x5F,0x74,0x65,0x78,0x10,0x00,0x00,0x00,0x00,
	0x00,0x0D,0x02,0x00,0x00,0x23,0x69,0x6E,0x63,0x6C,0x75,0x64,0x65,0x20,0x3C,0x6D,0x65,0x74,0x61,0x6C,0x5F,0x73,0x74,0x64,0x6C,
	0x69,0x62,0x3E,0x0A,0x23,0x69,0x6E,0x63,0x6C,0x75,0x64,0x65,0x20,0x3C,0x73,0x69,0x6D,0x64,0x2F,0x73,0x69,0x6D,0x64,0x2E,0x68,
	0x3E,0x0A,0x0A,0x75,0x73,0x69,0x6E,0x67,0x20,0x6E,0x61,0x6D,0x65,0x73,0x70,0x61,0x63,0x65,0x20,0x6D,0x65,0x74,0x61,0x6C,0x3B,
	0x0A,0x0A,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x5F,0x6F,0x75,0x74,0x0A,
	0x7B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,0x61,0x74,0x34,0x20,0x62,0x67,0x66,0x78,0x5F,0x46,0x72,0x61,0x67,0x44,0x61,0x74,
	0x61,0x30,0x20,0x5B,0x5B,0x63,0x6F,0x6C,0x6F,0x72,0x28,0x30,0x29,0x5D,0x5D,0x3B,0x0A,0x7D,0x3B,0x0A,0x0A,0x73,0x74,0x72,0x75,
	0x63,0x74,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x5F,0x69,0x6E,0x0A,0x7B,0x0A,0x20,0x20,0x20,0x20,0x66,
	0x6C,0x6F,0x61,0x74,0x34,0x20,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x20,0x5B,0x5B,0x75,0x73,0x65,0x72,0x28,0x6C,0x6F,0x63,
	0x6E,0x30,0x29,0x5D,0x5D,0x3B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,0x61,0x74,0x32,0x20,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,
	0x6F,0x72,0x64,0x30,0x20,0x5B,0x5B,0x75,0x73,0x65,0x72,0x28,0x6C,0x6F,0x63,0x6E,0x31,0x29,0x5D,0x5D,0x3B,0x0A,0x7D,0x3B,0x0A,
	0x0A,0x66,0x72,0x61,0x67,0x6D,0x65,0x6E,0x74,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x5F,0x6F,0x75,0x74,
	0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x28,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x5F,
	0x69,0x6E,0x20,0x69,0x6E,0x20,0x5B,0x5B,0x73,0x74,0x61,0x67,0x65,0x5F,0x69,0x6E,0x5D,0x5D,0x2C,0x20,0x74,0x65,0x78,0x74,0x75,
	0x72,0x65,0x32,0x64,0x3C,0x66,0x6C,0x6F,0x61,0x74,0x3E,0x20,0x73,0x5F,0x74,0x65,0x78,0x20,0x5B,0x5B,0x74,0x65,0x78,0x74,0x75,
	0x72,0x65,0x28,0x30,0x29,0x5D,0x5D,0x2C,0x20,0x73,0x61,0x6D,0x70,0x6C,0x65,0x72,0x20,0x73,0x5F,0x74,0x65,0x78,0x53,0x61,0x6D,
	0x70,0x6C,0x65,0x72,0x20,0x5B,0x5B,0x73,0x61,0x6D,0x70,0x6C,0x65,0x72,0x28,0x30,0x29,0x5D,0x5D,0x29,0x0A,0x7B,0x0A,0x20,0x20,
	0x20,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x5F,0x6F,0x75,0x74,0x20,0x6F,0x75,0x74,0x20,0x3D,0x20,0x7B,
	0x7D,0x3B,0x0A,0x20,0x20,0x20,0x20,0x6F,0x75,0x74,0x2E,0x62,0x67,0x66,0x78,0x5F,0x46,0x72,0x61,0x67,0x44,0x61,0x74,0x61,0x30,
	0x20,0x3D,0x20,0x73,0x5F,0x74,0x65,0x78,0x2E,0x73,0x61,0x6D,0x70,0x6C,0x65,0x28,0x73,0x5F,0x74,0x65,0x78,0x53,0x61,0x6D,0x70,
	0x6C,0x65,0x72,0x2C,0x20,0x69,0x6E,0x2E,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x29,0x20,0x2A,0x20,0x69,0x6E,
	0x2E,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x3B,0x0A,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6E,0x20,0x6F,0x75,0x74,
	0x3B,0x0A,0x7D,0x0A,0x0A,0x00,0x00,0x00,0x00,0x00
};

static const int vs_imgui_glsl_len = 480;
static const unsigned char vs_imgui_glsl[] = {
	0x56,0x53,0x48,0x06,0x00,0x00,0x00,0x00,0x01,0x83,0xF2,0xE1,0x01,0x00,0x0B,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,
	0x6C,0x02,0x01,0x00,0x00,0x01,0x00,0xBA,0x01,0x00,0x00,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,0x63,0x34,
	0x20,0x61,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x3B,0x0A,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,0x63,0x33,
	0x20,0x61,0x5F,0x70,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x3B,0x0A,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,
	0x63,0x32,0x20,0x61,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x3B,0x0A,0x76,0x61,0x72,0x79,0x69,0x6E,0x67,0x20,0x76,
	0x65,0x63,0x34,0x20,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x3B,0x0A,0x76,0x61,0x72,0x79,0x69,0x6E,0x67,0x20,0x76,0x65,0x63,
	0x32,0x20,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x3B,0x0A,0x75,0x6E,0x69,0x66,0x6F,0x72,0x6D,0x20,0x76,0x65,
	0x63,0x34,0x20,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,0x6C,0x3B,0x0A,0x76,0x6F,0x69,0x64,0x20,0x6D,0x61,0x69,0x6E,
	0x20,0x28,0x29,0x0A,0x7B,0x0A,0x20,0x20,0x76,0x65,0x63,0x32,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x31,0x3B,0x0A,0x20,0x20,
	0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x31,0x20,0x3D,0x20,0x28,0x28,0x32,0x2E,0x30,0x20,0x2A,0x20,0x61,0x5F,0x70,0x6F,0x73,0x69,
	0x74,0x69,0x6F,0x6E,0x2E,0x78,0x79,0x29,0x20,0x2A,0x20,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,0x6C,0x2E,0x78,0x79,
	0x29,0x3B,0x0A,0x20,0x20,0x76,0x65,0x63,0x34,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x32,0x3B,0x0A,0x20,0x20,0x74,0x6D,0x70,
	0x76,0x61,0x72,0x5F,0x32,0x2E,0x7A,0x77,0x20,0x3D,0x20,0x76,0x65,0x63,0x32,0x28,0x30,0x2E,0x30,0x2C,0x20,0x31,0x2E,0x30,0x29,
	0x3B,0x0A,0x20,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x32,0x2E,0x78,0x20,0x3D,0x20,0x28,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,
	0x31,0x2E,0x78,0x20,0x2D,0x20,0x31,0x2E,0x30,0x29,0x3B,0x0A,0x20,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x32,0x2E,0x79,0x20,
	0x3D,0x20,0x28,0x31,0x2E,0x30,0x20,0x2D,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x31,0x2E,0x79,0x29,0x3B,0x0A,0x20,0x20,0x67,
	0x6C,0x5F,0x50,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x20,0x3D,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x32,0x3B,0x0A,0x20,0x20,
	0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x20,0x3D,0x20,0x61,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,
	0x3B,0x0A,0x20,0x20,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x20,0x3D,0x20,0x61,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x3B,0x0A,
	0x7D,0x0A,0x0A,0x00,0x00
};

static const int vs_imgui_essl_len = 480;
static const unsigned char vs_imgui_essl[] = {
	0x56,0x53,0x48,0x06,0x00,0x00,0x00,0x00,0x01,0x83,0xF2,0xE1,0x01,0x00,0x0B,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,
	0x6C,0x02,0x01,0x00,0x00,0x01,0x00,0xBA,0x01,0x00,0x00,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,0x63,0x34,
	0x20,0x61,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x3B,0x0A,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,0x63,0x33,
	0x20,0x61,0x5F,0x70,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x3B,0x0A,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,
	0x63,0x32,0x20,0x61,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x3B,0x0A,0x76,0x61,0x72,0x79,0x69,0x6E,0x67,0x20,0x76,
	0x65,0x63,0x34,0x20,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x3B,0x0A,0x76,0x61,0x72,0x79,0x69,0x6E,0x67,0x20,0x76,0x65,0x63,
	0x32,0x20,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x3B,0x0A,0x75,0x6E,0x69,0x66,0x6F,0x72,0x6D,0x20,0x76,0x65,
	0x63,0x34,0x20,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,0x6C,0x3B,0x0A,0x76,0x6F,0x69,0x64,0x20,0x6D,0x61,0x69,0x6E,
	0x20,0x28,0x29,0x0A,0x7B,0x0A,0x20,0x20,0x76,0x65,0x63,0x32,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x31,0x3B,0x0A,0x20,0x20,
	0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x31,0x20,0x3D,0x20,0x28,0x28,0x32,0x2E,0x30,0x20,0x2A,0x20,0x61,0x5F,0x70,0x6F,0x73,0x69,
	0x74,0x69,0x6F,0x6E,0x2E,0x78,0x79,0x29,0x20,0x2A,0x20,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,0x6C,0x2E,0x78,0x79,
	0x29,0x3B,0x0A,0x20,0x20,0x76,0x65,0x63,0x34,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x32,0x3B,0x0A,0x20,0x20,0x74,0x6D,0x70,
	0x76,0x61,0x72,0x5F,0x32,0x2E,0x7A,0x77,0x20,0x3D,0x20,0x76,0x65,0x63,0x32,0x28,0x30,0x2E,0x30,0x2C,0x20,0x31,0x2E,0x30,0x29,
	0x3B,0x0A,0x20,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x32,0x2E,0x78,0x20,0x3D,0x20,0x28,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,
	0x31,0x2E,0x78,0x20,0x2D,0x20,0x31,0x2E,0x30,0x29,0x3B,0x0A,0x20,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x32,0x2E,0x79,0x20,
	0x3D,0x20,0x28,0x31,0x2E,0x30,0x20,0x2D,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x31,0x2E,0x79,0x29,0x3B,0x0A,0x20,0x20,0x67,
	0x6C,0x5F,0x50,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x20,0x3D,0x20,0x74,0x6D,0x70,0x76,0x61,0x72,0x5F,0x32,0x3B,0x0A,0x20,0x20,
	0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x20,0x3D,0x20,0x61,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,
	0x3B,0x0A,0x20,0x20,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x20,0x3D,0x20,0x61,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x3B,0x0A,
	0x7D,0x0A,0x0A,0x00,0x00
};

static const int vs_imgui_dx9_len = 422;
static const unsigned char vs_imgui_dx9[] = {
	0x56,0x53,0x48,0x06,0x00,0x00,0x00,0x00,0x01,0x83,0xF2,0xE1,0x01,0x00,0x0B,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,
	0x6C,0x02,0x01,0x00,0x00,0x01,0x00,0x80,0x01,0x00,0x00,0x00,0x03,0xFE,0xFF,0xFE,0xFF,0x20,0x00,0x43,0x54,0x41,0x42,0x1C,0x00,
	0x00,0x00,0x53,0x00,0x00,0x00,0x00,0x03,0xFE,0xFF,0x01,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x4C,0x00,0x00,
	0x00,0x30,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x75,0x5F,0x76,0x69,
	0x65,0x77,0x54,0x65,0x78,0x65,0x6C,0x00,0x01,0x00,0x03,0x00,0x01,0x00,0x04,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x76,
	0x73,0x5F,0x33,0x5F,0x30,0x00,0x4D,0x69,0x63,0x72,0x6F,0x73,0x6F,0x66,0x74,0x20,0x28,0x52,0x29,0x20,0x48,0x4C,0x53,0x4C,0x20,
	0x53,0x68,0x61,0x64,0x65,0x72,0x20,0x43,0x6F,0x6D,0x70,0x69,0x6C,0x65,0x72,0x20,0x31,0x30,0x2E,0x31,0x00,0xAB,0x51,0x00,0x00,
	0x05,0x01,0x00,0x0F,0xA0,0x00,0x00,0x00,0x40,0x00,0x00,0x80,0xBF,0x00,0x00,0x80,0x3F,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x02,
	0x0A,0x00,0x00,0x80,0x00,0x00,0x0F,0x90,0x1F,0x00,0x00,0x02,0x00,0x00,0x00,0x80,0x01,0x00,0x0F,0x90,0x1F,0x00,0x00,0x02,0x05,
	0x00,0x00,0x80,0x02,0x00,0x0F,0x90,0x1F,0x00,0x00,0x02,0x00,0x00,0x00,0x80,0x00,0x00,0x0F,0xE0,0x1F,0x00,0x00,0x02,0x0A,0x00,
	0x00,0x80,0x01,0x00,0x0F,0xE0,0x1F,0x00,0x00,0x02,0x05,0x00,0x00,0x80,0x02,0x00,0x03,0xE0,0x05,0x00,0x00,0x03,0x00,0x00,0x03,
	0x80,0x01,0x00,0x00,0xA0,0x01,0x00,0xE4,0x90,0x05,0x00,0x00,0x03,0x00,0x00,0x03,0x80,0x00,0x00,0xE4,0x80,0x00,0x00,0xE4,0xA0,
	0x02,0x00,0x00,0x03,0x01,0x00,0x01,0x80,0x00,0x00,0x00,0x80,0x01,0x00,0x55,0xA0,0x01,0x00,0x00,0x02,0x00,0x00,0x01,0x80,0x00,
	0x00,0x55,0x81,0x02,0x00,0x00,0x03,0x01,0x00,0x02,0x80,0x00,0x00,0x00,0x80,0x01,0x00,0xAA,0xA0,0x01,0x00,0x00,0x02,0x01,0x00,
	0x0C,0x80,0x01,0x00,0xB4,0xA0,0x01,0x00,0x00,0x02,0x00,0x00,0x03,0x80,0x02,0x00,0xE4,0x90,0x01,0x00,0x00,0x02,0x02,0x00,0x0F,
	0x80,0x00,0x00,0xE4,0x90,0x01,0x00,0x00,0x02,0x00,0x00,0x0F,0xE0,0x01,0x00,0xE4,0x80,0x01,0x00,0x00,0x02,0x01,0x00,0x0F,0xE0,
	0x02,0x00,0xE4,0x80,0x01,0x00,0x00,0x02,0x02,0x00,0x03,0xE0,0x00,0x00,0xE4,0x80,0xFF,0xFF,0x00,0x00,0x00,0x00
};

static const int vs_imgui_dx11_len = 743;
static const unsigned char vs_imgui_dx11[] = {
	0x56,0x53,0x48,0x06,0x00,0x00,0x00,0x00,0x01,0x83,0xF2,0xE1,0x01,0x00,0x0B,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,
	0x6C,0x02,0x00,0x00,0x00,0x01,0x00,0xB8,0x02,0x00,0x00,0x44,0x58,0x42,0x43,0x4D,0xE6,0x92,0xC7,0x99,0x74,0xD2,0xF7,0x95,0x65,
	0x3E,0x89,0xC7,0x62,0xF1,0x35,0x01,0x00,0x00,0x00,0xB8,0x02,0x00,0x00,0x03,0x00,0x00,0x00,0x2C,0x00,0x00,0x00,0x9C,0x00,0x00,
	0x00,0x10,0x01,0x00,0x00,0x49,0x53,0x47,0x4E,0x68,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x50,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x56,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x07,0x03,0x00,0x00,0x5F,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x43,0x4F,0x4C,0x4F,0x52,0x00,0x50,
	0x4F,0x53,0x49,0x54,0x49,0x4F,0x4E,0x00,0x54,0x45,0x58,0x43,0x4F,0x4F,0x52,0x44,0x00,0x4F,0x53,0x47,0x4E,0x6C,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x5C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,
	0x00,0x00,0x0F,0x00,0x00,0x00,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x02,0x00,0x00,
	0x00,0x03,0x0C,0x00,0x00,0x53,0x56,0x5F,0x50,0x4F,0x53,0x49,0x54,0x49,0x4F,0x4E,0x00,0x43,0x4F,0x4C,0x4F,0x52,0x00,0x54,0x45,
	0x58,0x43,0x4F,0x4F,0x52,0x44,0x00,0xAB,0x53,0x48,0x44,0x52,0xA0,0x01,0x00,0x00,0x40,0x00,0x01,0x00,0x68,0x00,0x00,0x00,0x59,
	0x00,0x00,0x04,0x46,0x8E,0x20,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x5F,0x00,0x00,0x03,0xF2,0x10,0x10,0x00,0x00,0x00,
	0x00,0x00,0x5F,0x00,0x00,0x03,0x32,0x10,0x10,0x00,0x01,0x00,0x00,0x00,0x5F,0x00,0x00,0x03,0x32,0x10,0x10,0x00,0x02,0x00,0x00,
	0x00,0x67,0x00,0x00,0x04,0xF2,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x65,0x00,0x00,0x03,0xF2,0x20,0x10,0x00,
	0x01,0x00,0x00,0x00,0x65,0x00,0x00,0x03,0x32,0x20,0x10,0x00,0x02,0x00,0x00,0x00,0x68,0x00,0x00,0x02,0x03,0x00,0x00,0x00,0x38,
	0x00,0x00,0x0A,0x32,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x10,0x10,0x00,0x01,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,
	0x00,0x40,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x08,0x32,0x00,0x10,0x00,0x00,0x00,0x00,
	0x00,0x46,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x80,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x05,
	0x42,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x00,0x00,0x00,0x80,0xBF,0x00,0x00,0x00,0x07,0x12,0x00,0x10,0x00,0x01,
	0x00,0x00,0x00,0x2A,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x0A,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x06,0x12,0x00,
	0x10,0x00,0x00,0x00,0x00,0x00,0x1A,0x00,0x10,0x80,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x22,0x00,0x10,
	0x00,0x01,0x00,0x00,0x00,0x0A,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x00,0x00,0x00,0x80,0x3F,0x36,0x00,0x00,0x08,
	0xC2,0x00,0x10,0x00,0x01,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x80,0x3F,0x36,0x00,0x00,0x05,0x32,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x46,0x10,0x10,0x00,0x02,0x00,0x00,0x00,0x36,0x00,
	0x00,0x05,0xF2,0x00,0x10,0x00,0x02,0x00,0x00,0x00,0x46,0x1E,0x10,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x05,0xF2,0x20,0x10,
	0x00,0x00,0x00,0x00,0x00,0x46,0x0E,0x10,0x00,0x01,0x00,0x00,0x00,0x36,0x00,0x00,0x05,0xF2,0x20,0x10,0x00,0x01,0x00,0x00,0x00,
	0x46,0x0E,0x10,0x00,0x02,0x00,0x00,0x00,0x36,0x00,0x00,0x05,0x32,0x20,0x10,0x00,0x02,0x00,0x00,0x00,0x46,0x00,0x10,0x00,0x00,
	0x00,0x00,0x00,0x3E,0x00,0x00,0x01,0x00,0x03,0x05,0x00,0x01,0x00,0x10,0x00,0x10,0x00,0x00
};

static const int vs_imgui_metal_len = 890;
static const unsigned char vs_imgui_metal[] = {
	0x56,0x53,0x48,0x06,0x00,0x00,0x00,0x00,0x01,0x83,0xF2,0xE1,0x01,0x00,0x0B,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,
	0x6C,0x02,0x01,0x00,0x00,0x01,0x00,0x4B,0x03,0x00,0x00,0x23,0x69,0x6E,0x63,0x6C,0x75,0x64,0x65,0x20,0x3C,0x6D,0x65,0x74,0x61,
	0x6C,0x5F,0x73,0x74,0x64,0x6C,0x69,0x62,0x3E,0x0A,0x23,0x69,0x6E,0x63,0x6C,0x75,0x64,0x65,0x20,0x3C,0x73,0x69,0x6D,0x64,0x2F,
	0x73,0x69,0x6D,0x64,0x2E,0x68,0x3E,0x0A,0x0A,0x75,0x73,0x69,0x6E,0x67,0x20,0x6E,0x61,0x6D,0x65,0x73,0x70,0x61,0x63,0x65,0x20,
	0x6D,0x65,0x74,0x61,0x6C,0x3B,0x0A,0x0A,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x5F,0x47,0x6C,0x6F,0x62,0x61,0x6C,0x0A,0x7B,0x0A,
	0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,0x61,0x74,0x34,0x20,0x75,0x5F,0x76,0x69,0x65,0x77,0x54,0x65,0x78,0x65,0x6C,0x3B,0x0A,0x7D,
	0x3B,0x0A,0x0A,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x5F,0x6F,0x75,0x74,
	0x0A,0x7B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,0x61,0x74,0x34,0x20,0x5F,0x65,0x6E,0x74,0x72,0x79,0x50,0x6F,0x69,0x6E,0x74,
	0x4F,0x75,0x74,0x70,0x75,0x74,0x5F,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x20,0x5B,0x5B,0x75,0x73,0x65,0x72,0x28,0x6C,0x6F,
	0x63,0x6E,0x30,0x29,0x5D,0x5D,0x3B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,0x61,0x74,0x32,0x20,0x5F,0x65,0x6E,0x74,0x72,0x79,
	0x50,0x6F,0x69,0x6E,0x74,0x4F,0x75,0x74,0x70,0x75,0x74,0x5F,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x20,0x5B,
	0x5B,0x75,0x73,0x65,0x72,0x28,0x6C,0x6F,0x63,0x6E,0x31,0x29,0x5D,0x5D,0x3B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,0x61,0x74,
	0x34,0x20,0x67,0x6C,0x5F,0x50,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x20,0x5B,0x5B,0x70,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x5D,
	0x5D,0x3B,0x0A,0x7D,0x3B,0x0A,0x0A,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,
	0x5F,0x69,0x6E,0x0A,0x7B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,0x61,0x74,0x34,0x20,0x61,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,
	0x20,0x5B,0x5B,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x28,0x30,0x29,0x5D,0x5D,0x3B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,
	0x6F,0x61,0x74,0x33,0x20,0x61,0x5F,0x70,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,0x20,0x5B,0x5B,0x61,0x74,0x74,0x72,0x69,0x62,0x75,
	0x74,0x65,0x28,0x31,0x29,0x5D,0x5D,0x3B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,0x61,0x74,0x32,0x20,0x61,0x5F,0x74,0x65,0x78,
	0x63,0x6F,0x6F,0x72,0x64,0x30,0x20,0x5B,0x5B,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x28,0x32,0x29,0x5D,0x5D,0x3B,0x0A,
	0x7D,0x3B,0x0A,0x0A,0x76,0x65,0x72,0x74,0x65,0x78,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x5F,0x6F,0x75,
	0x74,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,0x28,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,0x61,0x69,0x6E,
	0x5F,0x69,0x6E,0x20,0x69,0x6E,0x20,0x5B,0x5B,0x73,0x74,0x61,0x67,0x65,0x5F,0x69,0x6E,0x5D,0x5D,0x2C,0x20,0x63,0x6F,0x6E,0x73,
	0x74,0x61,0x6E,0x74,0x20,0x5F,0x47,0x6C,0x6F,0x62,0x61,0x6C,0x26,0x20,0x5F,0x6D,0x74,0x6C,0x5F,0x75,0x20,0x5B,0x5B,0x62,0x75,
	0x66,0x66,0x65,0x72,0x28,0x30,0x29,0x5D,0x5D,0x29,0x0A,0x7B,0x0A,0x20,0x20,0x20,0x20,0x78,0x6C,0x61,0x74,0x4D,0x74,0x6C,0x4D,
	0x61,0x69,0x6E,0x5F,0x6F,0x75,0x74,0x20,0x6F,0x75,0x74,0x20,0x3D,0x20,0x7B,0x7D,0x3B,0x0A,0x20,0x20,0x20,0x20,0x66,0x6C,0x6F,
	0x61,0x74,0x32,0x20,0x5F,0x31,0x32,0x33,0x20,0x3D,0x20,0x28,0x69,0x6E,0x2E,0x61,0x5F,0x70,0x6F,0x73,0x69,0x74,0x69,0x6F,0x6E,
	0x2E,0x78,0x79,0x20,0x2A,0x20,0x32,0x2E,0x30,0x29,0x20,0x2A,0x20,0x5F,0x6D,0x74,0x6C,0x5F,0x75,0x2E,0x75,0x5F,0x76,0x69,0x65,
	0x77,0x54,0x65,0x78,0x65,0x6C,0x2E,0x78,0x79,0x3B,0x0A,0x20,0x20,0x20,0x20,0x6F,0x75,0x74,0x2E,0x67,0x6C,0x5F,0x50,0x6F,0x73,
	0x69,0x74,0x69,0x6F,0x6E,0x20,0x3D,0x20,0x66,0x6C,0x6F,0x61,0x74,0x34,0x28,0x5F,0x31,0x32,0x33,0x2E,0x78,0x20,0x2D,0x20,0x31,
	0x2E,0x30,0x2C,0x20,0x31,0x2E,0x30,0x20,0x2D,0x20,0x5F,0x31,0x32,0x33,0x2E,0x79,0x2C,0x20,0x30,0x2E,0x30,0x2C,0x20,0x31,0x2E,
	0x30,0x29,0x3B,0x0A,0x20,0x20,0x20,0x20,0x6F,0x75,0x74,0x2E,0x5F,0x65,0x6E,0x74,0x72,0x79,0x50,0x6F,0x69,0x6E,0x74,0x4F,0x75,
	0x74,0x70,0x75,0x74,0x5F,0x76,0x5F,0x63,0x6F,0x6C,0x6F,0x72,0x30,0x20,0x3D,0x20,0x69,0x6E,0x2E,0x61,0x5F,0x63,0x6F,0x6C,0x6F,
	0x72,0x30,0x3B,0x0A,0x20,0x20,0x20,0x20,0x6F,0x75,0x74,0x2E,0x5F,0x65,0x6E,0x74,0x72,0x79,0x50,0x6F,0x69,0x6E,0x74,0x4F,0x75,
	0x74,0x70,0x75,0x74,0x5F,0x76,0x5F,0x74,0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x20,0x3D,0x20,0x69,0x6E,0x2E,0x61,0x5F,0x74,
	0x65,0x78,0x63,0x6F,0x6F,0x72,0x64,0x30,0x3B,0x0A,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6E,0x20,0x6F,0x75,0x74,0x3B,
	0x0A,0x7D,0x0A,0x0A,0x00,0x03,0x05,0x00,0x01,0x00,0x10,0x00,0x10,0x00,0x00
};

_getShader(fs_imgui)
_getShader(vs_imgui)
