#pragma once
#include "Prerequisites.h"
//This is forward declaration from the (Device) class
class
	Device;
//This is forward declaration from the (Texture) class
class
	Texture;

class
	DeviceContext;

class DepthStencilView;

class 
RenderTargetView{
public:
	RenderTargetView() = default;
	~RenderTargetView() {};

	/*
	* Creamos un Render Target View para entrar a la resource data,
	* device: Referencia para llamar al metodo CreateRenderTargetView
	* backBuffer: Textura creada como render target
	* Format: Le da el desc.Formt del Render target view desc
	*/
	void
	init(Device device, 
		Texture backBuffer, 
		DXGI_FORMAT Format);

	void
	update();

	void
	render(DeviceContext& deviceContext, DepthStencilView& depthStencilView);

	void
	destroy();

public:
	//La rendertargeview identifica los recursos del render target a los que 
	//se puede entrar durante el render
	ID3D11RenderTargetView* m_renderTargetView = nullptr;
	float m_cleanColor[4] = { 0.0f, 0.125f, 0.3f, 1.0f };

};
