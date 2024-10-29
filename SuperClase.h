#pragma once
#include "LaberintosComposite.h"
#include "LaberintoDimensionDesconocida.h"
#include "LaberintoEncantado.h"
#include "LaberintoJurasico.h"
class SuperClase {
private:
	LaberintosComposite* lc;
public:
	SuperClase();
	//superclase
	void agregarLabDimensionDesconocida(Componente*);
	void agregarLabEncantado(Componente*);
	void agregarLabJurasico(Componente*);
	void guardaLaberintos();
	string  toString();
};