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

	// Creamos el dispositivo direct3D 
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
	D3D_DRIVER_TYPE m_driverType = D3D_DRIVER_TYPE_NULL;
	D3D_FEATURE_LEVEL m_featureLevel = D3D_FEATURE_LEVEL_11_0;
	IDXGISwapChain* m_swapChain = nullptr;

};
