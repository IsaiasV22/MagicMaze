#include "HabitacionCuarto.h"

HabitacionCuarto::HabitacionCuarto(int num)
{
	numeroDeHabitacion = num;
}

void HabitacionCuarto::setNumDeHabitacion(int num)
{
	numeroDeHabitacion = num;
}

int HabitacionCuarto::getNumDeHabitacion()
{
	return numeroDeHabitacion;
}

string HabitacionCuarto::toString() const
{
	stringstream s;

	s << "|_Cuarto_"<<numeroDeHabitacion<<"|";
	return s.str();
}


