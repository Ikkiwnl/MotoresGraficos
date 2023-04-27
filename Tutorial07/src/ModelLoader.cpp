#include "ModelLoader.h"
#include "OBJLoader.h"

LoadData
ModelLoader::load(std::string objFileName) {

  //Temporal Load Data
  LoadData LD;
  objl::Loader Loader;

  bool Model = Loader.LoadFile(objFileName);

  if (Model) {
    //We have a Model .obj

    int totalVertices = Loader.LoadedVertices.size();
    int totalIndices = Loader.LoadedIndices.size();
    int loadedVertices = 0;

    LD.name = objFileName;

    WARNING("ModelLoader::Load() [Load of file: " << objFileName.c_str() << "] \n");

    //// Extract vertex and index data from obj_loader's structures
    //const std::vector<objl::Vertex>& vertices = Loader.LoadedVertices;
    //const std::vector<unsigned int>& indices = Loader.LoadedIndices;

    //// Allocate memory for the vertex and index data
    //int numVertices = static_cast<int>(vertices.size());
    //int numIndices = static_cast<int>(indices.size());

    //SimpleVertex* vertexData = new SimpleVertex[numVertices];
    //unsigned int* indexData = new unsigned int[numIndices];

    LD.vertex.resize(totalVertices);

    // Convert obj_loader's vertex data to SimpleVertex struct format
    for (int i = 0; i < totalVertices; ++i) {
      /*const objl::Vertex& vertex = vertices[i];*/

      LD.vertex[i].Pos.x = Loader.LoadedVertices[i].Position.X;
      LD.vertex[i].Pos.y = Loader.LoadedVertices[i].Position.Y;
      LD.vertex[i].Pos.z = Loader.LoadedVertices[i].Position.Z;

      //vertexData[i].normal.x = vertex.Normal.X;
      //vertexData[i].normal.y = vertex.Normal.Y;
      //vertexData[i].normal.z = vertex.Normal.Z;

      LD.vertex[i].Tex.x = Loader.LoadedVertices[i].TextureCoordinate.X;
      LD.vertex[i].Tex.y = 1.0f - Loader.LoadedVertices[i].TextureCoordinate.Y;
    }


    LD.index.resize(totalIndices);

    for (int i = 0; i < totalIndices; ++i) {
      /*const objl::Vertex& vertex = vertices[i];*/

      LD.index[i] = Loader.LoadedIndices[i];

    }

    // Copy obj_loader's index data to indexData array
    //memcpy(indexData, &indices[0], numIndices * sizeof(unsigned int));

    // Store the loaded data in the LoadData structure
    LD.name = objFileName;
    LD.numVertex = totalVertices;
    LD.numIndex = totalIndices;
  }
  else {
    WARNING("ModelLoader::LoadData() [Failed to load file: " << objFileName.c_str() << "] \n");
  }

  return LD;
}
