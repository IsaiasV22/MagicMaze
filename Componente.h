#pragma once
#include <iostream>
#include <sstream>
#include "FabricaAbstractaLaberintos.h"
#include "ColeccionMatriz.h"
#include <fstream>
using namespace std;

class Componente { //Interfaz <<Abstract>>
public:
	Componente(){}
	virtual ~Componente(){}
	virtual string toString() const = 0;
	virtual bool agregar(Componente*) = 0;
	virtual FabricaAbstractaLaberintos* crearLaberinto(FabricaAbstractaLaberintos*) = 0;
	virtual void guardarLaberintos() = 0;
	virtual ColeccionMatriz* getMatriz() = 0;
};

