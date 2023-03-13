#include <Windows.h>
#pragma once

//Clase a cargo de proveer un tiempo variable que será ejecutado en el gameloop
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
	LARGE_INTEGER m_currentTime;
	LARGE_INTEGER m_lastTime;
	LARGE_INTEGER m_timerFrequency;
	
};//Erick Aaron :D

//Erick Aaron :D