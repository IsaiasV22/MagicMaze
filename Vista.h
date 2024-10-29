#pragma once
#include "SuperClase.h"

class Vista {
public:
	//intro
	static int menuPrincipal();
	//case 1
	static void creaLaberintoDimensionDesconocida(SuperClase*);
	//case 2
	static void creaLaberintoEncantado(SuperClase*);
	//case 3
	static void creaLaberintoJurasico(SuperClase*);
	//case 4
	static void mostrarLaberintos(SuperClase*);
	static void guardaLaberintos(SuperClase*);
};