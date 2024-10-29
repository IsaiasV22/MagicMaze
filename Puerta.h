#pragma once
#include <iostream>
#include "Habitacion.h"
using namespace std;
class Puerta : public LugarDelMapa {
protected:
	/*Habitacion* habitac1;
	Habitacion* habitac2;*/
	//bool estaAbierta;
public:
	Puerta() {};
	//virtual void entrar(){}
	virtual string toString() const = 0;
};