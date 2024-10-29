#pragma once
#include "PuertaTunel.h"
#include "FabricaAbstractaLaberintos.h"
#include "ParedRupestre.h"
#include "HabitacionCueva.h"
#include "LaberintoJurasico.h"
class FabLaberintoJurasico : public FabricaAbstractaLaberintos {
public:
	FabLaberintoJurasico() {};
	virtual ~FabLaberintoJurasico() {};
	virtual Puerta* hacerPuerta() const;
	virtual Pared* hacerPared() const;
	virtual Habitacion* hacerHabitacion(int n) const;
	//Laberinto* hacerLaberinto();
	//virtual string toString() const = 0;
};