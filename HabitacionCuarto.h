#pragma once
#include "Habitacion.h"
class HabitacionCuarto : public Habitacion {
public:
	HabitacionCuarto(int);
	virtual void setNumDeHabitacion(int);
	virtual int getNumDeHabitacion();
	virtual string toString() const;
};