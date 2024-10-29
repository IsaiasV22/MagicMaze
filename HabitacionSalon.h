#pragma once
#include "Habitacion.h"
class HabitacionSalon : public Habitacion {
public:
	HabitacionSalon(int n);
	virtual void setNumDeHabitacion(int);
	virtual int getNumDeHabitacion();
	virtual string toString() const;
};