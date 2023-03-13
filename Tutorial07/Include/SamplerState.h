#pragma once
#include "Prerequisites.h"

class Device;

class SamplerState
{
public:
    //Permite crear el sample state que da formato a las dimesiones de las texturas
    //Erick Aaron :D
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
    ID3D11SamplerState* m_sampler = nullptr;
};
//Erick Aaron :D