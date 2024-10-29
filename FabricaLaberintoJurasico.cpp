#include "FabricaLaberintoJurasico.h"

Puerta* FabLaberintoJurasico::hacerPuerta() const
{
    return new PuertaTunel();
}

Pared* FabLaberintoJurasico::hacerPared() const
{
    return new ParedRupestre();
}

Habitacion* FabLaberintoJurasico::hacerHabitacion(int n) const
{
    return new HabitacionCueva(n);
}
