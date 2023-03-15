#include "Prerequisites.h"
#pragma once

//Llamamos una clase para ser usada en el cpp (Device)
class
	Device;

class
	DepthStencilView
{
public:
	DepthStencilView() = default;
	~DepthStencilView() { SAFE_RELEASE(m_pDepthStencilView) };

	// Create the depth stencil view
	void
		init(Device device, ID3D11Resource* depthStencil, DXGI_FORMAT Format);

	void
		update();

	void
		render();

	void
		destroy();

public:
	//Seteamos las variables necesarias para el cpp
	ID3D11DepthStencilView* m_pDepthStencilView = nullptr;

};
//Erick Aaron :D