#pragma once
#include "Prerequisites.h"
#include "Commons.h"

//Call to the Class is begin used in cpp (Device)
class
	Device;

class
	Texture
{
public:
	Texture() = default;
	~Texture() {};

	void
		init(Device device, std::string textureName);

	void
		init(Device device,
			unsigned int width,
			unsigned int height,
			DXGI_FORMAT Format,
			unsigned int BindFlags);
	//Erick Aaron :D
	void
		update();

	void
		render();

	void
		destroy();

	//Erick Aaron :D
public:
	//This variable is in charge if handle a texture resource as data
	ID3D11Texture2D* m_texture = nullptr;

	//This variable is in charge of hanlde a texture resource as image data
	ID3D11ShaderResourceView* m_textureFromImg = nullptr;

};
