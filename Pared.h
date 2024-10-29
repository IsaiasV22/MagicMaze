#pragma once
#include <iostream>
#include "LugarDelMapa.h"
using namespace std;

class Pared : public LugarDelMapa{ //clase abstracta
protected:
	string tipo;
public:
	Pared(){}
	virtual ~Pared(){}
	//virtual void entrar(){}
	virtual string toString() const = 0;
};