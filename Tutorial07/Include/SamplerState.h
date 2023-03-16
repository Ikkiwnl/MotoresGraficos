#pragma once
#include "Prerequisites.h"

class 
Device;

class 
 SamplerState{
public:
        //Permite crear el sample state que da formato a las dimesiones de las texturas
        //El samplestate contiene una descripcion que puedes unir a cualquier etapa del shader
        SamplerState() = default;
        ~SamplerState() {};

        void
        init(Device device);

        void
        update();

        void
        render();

        void
        destroy();

public:
        //Dirección de un puntero al sampler state object creado
        ID3D11SamplerState* m_sampler = nullptr;
};
//Erick Aaron :D