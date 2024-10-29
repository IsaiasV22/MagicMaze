#include "HabitacionCueva.h"

HabitacionCueva::HabitacionCueva(int num)
{
	numeroDeHabitacion = num;
}

void HabitacionCueva::setNumDeHabitacion(int num)
{
	numeroDeHabitacion = num;
}

int HabitacionCueva::getNumDeHabitacion()
{
	return numeroDeHabitacion;
}

string HabitacionCueva::toString() const
{
	stringstream s;

	s << "|_Cueva_" << numeroDeHabitacion << "|";
	return s.str();
}

