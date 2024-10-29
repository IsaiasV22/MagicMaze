#pragma once
#include "FabricaAbstractaLaberintos.h"
#include "PuertaPortalMagico.h"
#include "ParedEncantada.h"
#include "HabitacionCuarto.h"
#include "LaberintoEncantado.h"
class FabLaberintoEncantado : public FabricaAbstractaLaberintos {
public:
	FabLaberintoEncantado() {};
	virtual ~FabLaberintoEncantado() {};
	virtual Puerta* hacerPuerta()const;
	virtual Pared* hacerPared()const;
	virtual Habitacion* hacerHabitacion(int n)const;
	//virtual Laberinto* hacerLaberinto() const;
	//virtual string toString() const = 0;
};