#pragma once
#include "Prerequisites.h"

class 
Window;

class
 DeviceContext;

class 
Viewport{
public:
      Viewport() = default;
      ~Viewport() {};

      //Creamos el viewport y definimos la dimension (altura, anchura)
      void
      init(Window window);

      void
      update();

      void
      render(DeviceContext& deviceContext);

      void
      destroy();

public:
      D3D11_VIEWPORT m_viewport;
};