#include "Prerequisites.h"
#pragma once
//Llamamos a la clase para ser usada en el cpp
class Device;

class
InputLayout {
public:
			InputLayout() = default;
			~InputLayout() { SAFE_RELEASE(m_inputLayout); };

				//Creamos un inputlayout que describe un input-buffer
				//para la input-assambler
				//Layout es un arreglo del input-assambler, cada tipo es
				//descrito por una descripción del elemento

			void
			init(Device device,
						std::vector<D3D11_INPUT_ELEMENT_DESC> Layout,
						ID3DBlob* VertexShaderData);
				
			void
			update();

			void
			render();

			void
			destroy();

public:
			// Un input-layout contiene una definicion del vertex data
			ID3D11InputLayout* m_inputLayout = nullptr;
};
