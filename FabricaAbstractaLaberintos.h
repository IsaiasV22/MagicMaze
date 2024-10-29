#pragma once
#include <iostream>
using namespace std;

#include "Puerta.h"
#include "Pared.h"
#include "Habitacion.h"

class FabricaAbstractaLaberintos {
protected:
	string codigo;
	/*Puerta* puerta1;
	Pared* pared1;
	Habitacion* habitacion1;*/
public:
	FabricaAbstractaLaberintos() {}
	virtual Puerta* hacerPuerta() const = 0;
	virtual Pared* hacerPared() const = 0;
	virtual Habitacion* hacerHabitacion(int n) const = 0;
	//virtual Laberinto* hacerLaberinto() const = 0;
	//virtual string toString() const = 0;

};