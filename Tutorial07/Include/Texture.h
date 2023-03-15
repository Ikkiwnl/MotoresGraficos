#pragma once
#include "Prerequisites.h"
#include "Commons.h"

//Llamamos a la clase que se usara en el cpp
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
	//Seteamos las variables necesarias para el cpp
	//Variable a cargo de manejar una recurso de textura como datos
	ID3D11Texture2D* m_texture = nullptr;

	//Variable a cargo de manejar una recurso de textura como datos de imagen.
	ID3D11ShaderResourceView* m_textureFromImg = nullptr;

};
