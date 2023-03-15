#include "Prerequisites.h"
#pragma once
//Llamamos a la clase para ser usada en el cpp
class Device;

class
	InputLayout {
public:
	InputLayout() = default;
	~InputLayout() { SAFE_RELEASE(m_inputLayout); };

	void
		//Creamos un inputlayout que necesita un vector y un device
		init(Device device,
			std::vector<D3D11_INPUT_ELEMENT_DESC> Layout,
			ID3DBlob* VertexShaderData);
	//Erick Aaron :D
	void
		update();

	void
		render();

	void
		destroy();

public:
	ID3D11InputLayout* m_inputLayout = nullptr;
};

//Erick Aaron :D