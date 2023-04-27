#include "Prerequisites.h"
#pragma once


//--------------------------------------------------------------------------------------
// Structures
//--------------------------------------------------------------------------------------
struct SimpleVertex{
    XMFLOAT3 Pos;
    XMFLOAT2 Tex;
};

struct
  LoadData {
  std::string name;
  std::vector <SimpleVertex> vertex;
  std::vector <unsigned int> index;
  int numVertex;
  int numIndex;
};

struct Camera{
    XMMATRIX mView;
    XMMATRIX mProjection;
};

struct CBChangesEveryFrame{
    XMMATRIX mWorld;
    XMFLOAT4 vMeshColor;
};

struct Vector3{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
};
