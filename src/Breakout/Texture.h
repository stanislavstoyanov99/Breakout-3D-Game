#pragma once

#include <string>

class Texture
{
public:
	unsigned int Load(const std::string& fileName);
	void Bind(unsigned textureSlot = 0) const;

	int GetWidth() const { return _width; }
	int GetHeight() const { return _height; }

private:
	unsigned int _texture;

	int _width = 0;
	int _height = 0;
};