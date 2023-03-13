#pragma once
#include "Prerequisites.h"

class Window;//Erick Aaron :D
class Viewport
{
public:
    //Permite crear el sample state que da formato a las dimesiones de las texturas
    Viewport() = default;
    ~Viewport() {};

    void
        init(Window window);

    void
        update();

    void
        render();

    void
        destroy();

public:
    D3D11_VIEWPORT m_viewport;
};
//Erick Aaron :D