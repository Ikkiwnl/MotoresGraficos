#pragma once
#include <Windows.h>

class
	Window
{
public:
			Window();
			~Window();
			/* Para crear y mostrar la ventana
			* hInstance: Identifica una instancia o modulo
			* nCmdShow:  nCmdShow parametro se usa para minimizar y maximizar la ventana.
			* wndproc:  es un puntero a una función definida por la aplicación denominada 
			* procedimiento de ventana o proceso de ventana. 
			* windowName:	string que identifica la clase window.
			*/

			HRESULT
			init(HINSTANCE hInstance, int nCmdShow, WNDPROC wndproc, LPCSTR windowName);

			void
			update();

			void
			render();

			void
			destroy();

	//Erick Aaron :D
public:
			//El parametro hwnd es el identificador de window devuelto por CreateWindowEx.
			HWND								m_hWnd			=		nullptr;

			//hInstance en WNDCLASSEX especifica las instancia sobre la cual la clase esta registrada.
			HINSTANCE						m_hInst			=		nullptr;


			RECT								m_rect;

			//obtenemos el ancho de la ventana

			unsigned int				m_width;

			//obtenemos el alto de la ventana

			unsigned int				m_height;

			//obtenemos el nombre de la ventana

			LPCSTR m_windowName							=		"None";
};
//Erick Aaron :D