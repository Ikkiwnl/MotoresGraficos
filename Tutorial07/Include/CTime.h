#include <Windows.h>
#pragma once

//proveemos un tiempo que será ejecutado
class CTime
{
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
	float m_deltaTime;
private:
	//Seteamos las variables necesarias para el cpp
	LARGE_INTEGER m_currentTime;
	LARGE_INTEGER m_lastTime;
	LARGE_INTEGER m_timerFrequency;
	
};//Erick Aaron :D

//Erick Aaron :D