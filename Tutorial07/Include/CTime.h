#include <Windows.h>
#pragma once

//proveemos un tiempo que será ejecutado
class 
CTime{
public:
	CTime();
	~CTime();

	void
	init();

	void
	update();

	void
	render();

	void
	destroy();

public:
	//variable que controla el tiempo en todo el proyecto
	float m_deltaTime;

private:
	//A cargo de de obtener el timpo para inicializar funciones
	LARGE_INTEGER m_currentTime;

	//Guarda el tiempo anterior
	LARGE_INTEGER m_lastTime;

	//Frecuencia del rendimiento
	LARGE_INTEGER m_timerFrequency;

};
