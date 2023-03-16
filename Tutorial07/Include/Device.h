#include "Prerequisites.h" 
#pragma once

class
Device{
public:
			Device() = default;
			~Device() { SAFE_RELEASE(m_device) };

			void
			init();
				
			void
			update();

			void
			render();

			void
			destroy();

			//Creamos un depth-stencil view para acceder al resource data.
			HRESULT
			CreateDepthStencilView(ID3D11Resource* pResource,
															 const D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc,
															 ID3D11DepthStencilView** ppDepthStencilView);

			//Creamos un render-target view para acceder al resource data.
			HRESULT
			CreateRenderTargetView(ID3D11Resource* pResource,
															 const D3D11_RENDER_TARGET_VIEW_DESC* pDesc,
															 ID3D11RenderTargetView** ppRTView);

			//Creamos un array de las texturas 2D.
			HRESULT
			CreateTexture2D(const D3D11_TEXTURE2D_DESC* pDesc,
												const D3D11_SUBRESOURCE_DATA* pInitialData,
												ID3D11Texture2D** ppTexture2D);

			//Creamos un vertex-shader object desde un shader compilado.
			HRESULT
			CreateVertexShader(const void* pShaderBytecode,
													 unsigned int BytecodeLength,
													 ID3D11ClassLinkage* pClassLinkage,
													 ID3D11VertexShader** ppVertexShader);

			//Creamos un input-layout object que describe un input-buffer data.
			HRESULT
			CreateInputLayout(const D3D11_INPUT_ELEMENT_DESC* pInputElementDescs,
													unsigned int NumElements,
													const void* pShaderBytecodeWithInputSignature,
													unsigned int BytecodeLength,
													ID3D11InputLayout** ppInputLayout);

			//Creamos un pixel shader.
			HRESULT
			CreatePixelShader(const void* pShaderBytecode,
													unsigned int BytecodeLength,
													ID3D11ClassLinkage* pClassLinkage,
													ID3D11PixelShader** ppPixelShader);

			//Creamos un buffer (vertex buffer, index buffer, o shader-constant buffer).
			HRESULT
			CreateBuffer(const D3D11_BUFFER_DESC* pDesc,
										 const D3D11_SUBRESOURCE_DATA* pInitialData,
										 ID3D11Buffer** ppBuffer);

			//Creamos un sampler-state object que encapsula la informacion del sampling para una textura.
			HRESULT
			CreateSamplerState(const D3D11_SAMPLER_DESC* pSamplerDesc,
													 ID3D11SamplerState** ppSamplerState);

public:

			//ID3D11Device es un adaptador virtual, es usado para crear los recursos
			ID3D11Device* m_device = nullptr;

};

