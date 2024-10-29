#pragma once
#include <iostream>
#include <sstream>
#include "LugarDelMapa.h"
using namespace std;
class Habitacion : public LugarDelMapa  { //clase abstracta
protected:
	int numeroDeHabitacion;
	//LugarDelMapa* lm;
public:
	Habitacion(){}
	virtual ~Habitacion(){}
	virtual void setNumDeHabitacion(int) = 0;
	virtual int getNumDeHabitacion() = 0;
	//virtual void entrar(){}
	//virtual void establecerLado();
	virtual string toString() const = 0;
};