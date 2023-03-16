#pragma once
#include "Prerequisites.h"
#include "Commons.h"

//Llamamos a la clase que se usara en el cpp
class
Device;

class
Texture{

public:
				Texture() = default;
				~Texture() {};

				/*
				* Inicializamos la textura
				* device: para obtener la referencia de m_device
				* textureName: para tener el nombre del archivo
				*/

				void
					init(Device device, std::string textureName);

				/*
				* Inicializamos la textura desde el resource
				* Creamos un array 2D para la textura
				* device: para obtener la referencia de m_device
				*/

				void
				init(Device device,
							 unsigned int width,
							 unsigned int height,
							 DXGI_FORMAT Format,
							 unsigned int BindFlags);

				void
				update();

				void
				render();

				void
				destroy();


public:
				//Variable a cargo de manejar una recurso de textura como datos
				ID3D11Texture2D* m_texture										=	nullptr;

				//Variable a cargo de manejar una recurso de textura como datos de imagen.
				ID3D11ShaderResourceView* m_textureFromImg		=	nullptr;

};
