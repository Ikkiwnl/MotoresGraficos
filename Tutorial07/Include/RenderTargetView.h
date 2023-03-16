#pragma once
#include "Prerequisites.h"

class
Device;
class
Texture;

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
				render();

				void
				destroy();

public:
			//La rendertargeview identifica los recursos del render target a los que 
			//se puede entrar durante el render
			ID3D11RenderTargetView* m_renderTargetView = nullptr;

};
//Erick Aaron :D