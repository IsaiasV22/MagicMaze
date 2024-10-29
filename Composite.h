#pragma once
#include "Componente.h"

class Composite : public Componente {
protected:
	Componente*** mat;
	int numfila;
	int numColumna;
public:
	Composite();
	Composite(int,int);
	virtual ~Composite();
	virtual string toString() const;
	virtual bool agregar(Componente*) = 0;
	virtual FabricaAbstractaLaberintos* crearLaberinto(FabricaAbstractaLaberintos*) = 0;
	virtual void guardarLaberintos() = 0;
	virtual ColeccionMatriz* getMatriz() = 0;
};