#pragma once
class Abstraction
{
public:
	Abstraction();
	~Abstraction();

	//functions for using vertex access
	void GetNewSurfaces();

	//functions for presenting vertices to render... mb unessecary...

	//function for abstracting new verices
	void abstractSurfaces(float levelOfDetail);

	//debugs
private:
	//members for storing vertices/normals
	std::vector<DirectX::XMFLOAT3>*		rawVertices = nullptr;
	std::vector<DirectX::XMFLOAT3>*		rawNormals = nullptr;

	//debugs
	int x = 0;
};

