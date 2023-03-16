#pragma once
#include "Prerequisites.h"

//Llamamos a la clase para ser usada en el cpp
class
	Device;
//Llamamos a la clase para ser usada en el cpp
class
	DeviceContext;
//Llamamos a la clase para ser usada en el cpp
class
	Window;
//Llamamos a la clase para ser usada en el cpp
class
	Texture;

class SwapChain
{
public:
				SwapChain() = default;
				~SwapChain() {};

				/* Creamos el Direct3D device, device Context y le da contextualizacion al backbuffer
					* Swap chains controla el back buffer de la rotacion y forma la base de la animacion grafica.
					* window: para obtener la altura, anchura y el m_hWnd
					* device: para tener acceso a m_device
					* deviceContext: para tener acceso a m_deviceContext
					* backBuffer: para tener acceso a m_texture
					*/

				void
				init(Device& device,
						DeviceContext& deviceContext,
						Texture& backBuffer,
						Window window); 

				void
				update();

				void
				render();

				void
				destroy();

				//Present, es lo que mostramos en pantalla
				void
				present();


private:
				//Seteamos las variables necesarias para el cpp
				D3D_DRIVER_TYPE m_driverType		= D3D_DRIVER_TYPE_NULL;

				D3D_FEATURE_LEVEL m_featureLevel	= D3D_FEATURE_LEVEL_11_0;

				IDXGISwapChain* m_swapChain			= nullptr;

};
