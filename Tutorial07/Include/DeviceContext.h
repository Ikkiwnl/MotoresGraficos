#include "Prerequisites.h"
#pragma once

class
	DeviceContext {
public:
	DeviceContext() = default;
	~DeviceContext() { SAFE_RELEASE(m_deviceContext) };

	void
		init();

	void
		update();

	void
		render();

	void
		destroy();

	//dibujo indexed, primitivos no instanciados.
	void
		DrawIndexed(unsigned int IndexCount,
			unsigned int StartIndexLocation,
			unsigned int BaseVertexLocation);

	//Establecemos una matriz de estados de muestra en la etapa de pipeline del pixel shader.
	void
		PSSetSamplers(unsigned int StartSlot,
			unsigned int NumSamplers,
			ID3D11SamplerState* const* ppSamplers);

	//Vinculamos una matriz de recursos de sombreado en la etapa de pixel shader.
	void
		PSSetShaderResources(unsigned int StartSlot,
			unsigned int NumViews,
			ID3D11ShaderResourceView* const* ppShaderResourceViews);

	//Seteamos los constant buffers usados por el pixel shader.
	void
		PSSetConstantBuffers(unsigned int StartSlot,
			unsigned int NumBuffers,
			ID3D11Buffer* const* ppConstantBuffers);

	//Seteamos el pixel shader al device.
	void
		PSSetShader(ID3D11PixelShader* pPixelShader,
			ID3D11ClassInstance* const* ppClassInstances,
			unsigned int NumClassInstances);

	//Seteamos los constant buffers usados por el vertex shader.
	void
		VSSetConstantBuffers(unsigned int StartSlot,
			unsigned int NumBuffers,
			ID3D11Buffer* const* ppConstantBuffers);

	//Seteamos el vertex shader al device.
	void
		VSSetShader(ID3D11VertexShader* pVertexShader,
			ID3D11ClassInstance* const* ppClassInstances,
			unsigned int NumClassInstances);

	//Limpiamos el recurso depth-stencil.
	void
		ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView,
			unsigned int ClearFlags,
			float Depth,
			unsigned int Stencil);

	//Seteamos todos los elementos del render target a un valor.
	void
		ClearRenderTargetView(ID3D11RenderTargetView* pRenderTargetView,
			const float ColorRGBA[4]);

	//Vinculamos uno o mas render targets y el depth-stencil buffer
	void
		OMSetRenderTargets(unsigned int NumViews,
			ID3D11RenderTargetView* const* ppRenderTargetViews,
			ID3D11DepthStencilView* pDepthStencilView);

	//Vinculamos un array de viewports a la etapa de rasterizer en la pipeline.
	void
		RSSetViewports(unsigned int NumViewports,
			const D3D11_VIEWPORT* pViewports);

	//Vinculamos un input-layout object al input-assembler.
	void
		IASetInputLayout(ID3D11InputLayout* pInputLayout);

	//Vinculamos un array de los vertex buffers al input-assembler.
	void
		IASetVertexBuffers(unsigned int StartSlot,
			unsigned int NumBuffers,
			ID3D11Buffer* const* ppVertexBuffers,
			const unsigned int* pStrides,
			const unsigned int* pOffsets);

	//Vinculamos un index buffer al input-assembler.
	void
		IASetIndexBuffer(ID3D11Buffer* pIndexBuffer,
			DXGI_FORMAT Format,
			unsigned int Offset);

	//Vinculamos informacion acerca de primitive type, y data order que describe input data para el input assembler.
	
	void
		IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY Topology);

	void
		UpdateSubresource(ID3D11Resource* pDstResource,
			unsigned int DstSubresource,
			const D3D11_BOX* pDstBox,
			const void* pSrcData,
			unsigned int SrcRowPitch,
			unsigned int SrcDepthPitch);

public:
	//Seteamos las variables necesarias para el cpp
	ID3D11DeviceContext* m_deviceContext = nullptr;
};

