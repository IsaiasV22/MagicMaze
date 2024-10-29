#pragma once
#include "Habitacion.h"

class HabitacionCueva : public Habitacion {
public:
	HabitacionCueva(int);
	virtual void setNumDeHabitacion(int);
	virtual int getNumDeHabitacion();
	virtual string toString() const;

};