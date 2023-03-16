#pragma once
#include "Prerequisites.h"
#include "Commons.h"

class
Transform {
public:
	Transform() = default;
	~Transform() {};


	/* inicializamos las variables del transform
	* Actualizamos los datos del tutorial07
	* Aumentamos o reducimos la escala con with m_fSpeed * g_Time.m_fDeltaTime
	*/

	void
	init();

	void
	update();

	void
	render();

	void
	destroy();

public:
	Vector3 m_v3Position;
	float		m_fScaleNum;
	float		m_fRotateNum;
	float		m_fSpeed;
};

