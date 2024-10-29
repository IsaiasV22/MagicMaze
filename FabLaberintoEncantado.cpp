#include "FabLaberintoEncantado.h"

Puerta* FabLaberintoEncantado::hacerPuerta() const
{
    return new PuertaPortalMagico();
}

Pared* FabLaberintoEncantado::hacerPared() const
{
    return new ParedEncantada();
}

Habitacion* FabLaberintoEncantado::hacerHabitacion(int n) const
{
    return new HabitacionCuarto(n);
}

