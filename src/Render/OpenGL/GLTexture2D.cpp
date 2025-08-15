/*
// Copyright 2019-2020 the donut authors. See AUTHORS.md

#include <Render/OpenGL/GLTexture2D.h>

namespace Donut::GL
{

GLTexture2D::GLTexture2D(GLsizei width, GLsizei height, GLenum internalFormat, GLenum format, GLenum type,
                         const void* textureData)
    : _width(width), _height(height), _internalFormat(internalFormat), _format(format), _type(type), _textureID(0)
{
	glGenTextures(1, &_textureID);

	glBindTexture(GL_TEXTURE_2D, _textureID);
	glTexImage2D(GL_TEXTURE_2D, 0, _internalFormat, _width, _height, 0, _format, _type, textureData);
	glGenerateMipmap(GL_TEXTURE_2D);
}

GLTexture2D::~GLTexture2D()
{
	if (_textureID != 0)
		glDeleteTextures(1, &_textureID);
}

} // namespace Donut::GL
*/
