#include "HabitacionSalon.h"

HabitacionSalon::HabitacionSalon(int n)
{
	numeroDeHabitacion = n;
}

void HabitacionSalon::setNumDeHabitacion(int n)
{
	numeroDeHabitacion = n;
}

int HabitacionSalon::getNumDeHabitacion()
{
	return numeroDeHabitacion;

}

string HabitacionSalon::toString() const
{
	stringstream s;
	s << "|_Salon_" << numeroDeHabitacion << "|";
	return s.str();
}


