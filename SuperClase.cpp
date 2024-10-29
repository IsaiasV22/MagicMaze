#include "SuperClase.h"

SuperClase::SuperClase()
{
	lc = new LaberintosComposite();
}

void SuperClase::agregarLabDimensionDesconocida(Componente*ldd)
{
	lc->agregar(ldd);
}

void SuperClase::agregarLabEncantado(Componente*le)
{
	lc->agregar(le);
}

void SuperClase::agregarLabJurasico(Componente*lj)
{
	lc->agregar(lj);
}

void SuperClase::guardaLaberintos()
{
	lc->guardarLaberintos();
}

string SuperClase::toString()
{
	return lc->toString();
}
