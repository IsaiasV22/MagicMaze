#include "FabLaberintoDimensionDesconocida.h"

Puerta* FabLaberintoDimensionDesconocida::hacerPuerta() const
{
    return new PuertaPasillo();
}

Pared* FabLaberintoDimensionDesconocida::hacerPared() const
{
    return new ParedEspejo();
}

Habitacion* FabLaberintoDimensionDesconocida::hacerHabitacion(int n) const
{
    return new HabitacionSalon(n);
}





