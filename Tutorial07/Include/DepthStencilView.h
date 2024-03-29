#include "Prerequisites.h"
#pragma once

//Llamamos una clase para ser usada en el cpp (Device)
class
Device;

class
DeviceContext;

class
DepthStencilView{
public:
	DepthStencilView() = default;
	~DepthStencilView() { SAFE_RELEASE(m_pDepthStencilView) };

	// Crea un recurso de depth stencil para poder diferenciar en lo que se encuentra 
	//y lo que no
	

	void
	init(Device device, ID3D11Resource* depthStencil, DXGI_FORMAT Format);

	void
	update();

	void
	render(DeviceContext& deviceContext);

	void
	destroy();

public:
	ID3D11DepthStencilView* m_pDepthStencilView = nullptr;

};
