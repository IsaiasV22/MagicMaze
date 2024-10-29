#pragma once
#include "FabricaAbstractaLaberintos.h"
#include "PuertaPasillo.h"
#include "ParedEspejo.h"
#include "HabitacionSalon.h"
#include "LaberintoDimensionDesconocida.h"
class FabLaberintoDimensionDesconocida : public FabricaAbstractaLaberintos {
public:
	FabLaberintoDimensionDesconocida() {};
	virtual ~FabLaberintoDimensionDesconocida() {};
	virtual Puerta* hacerPuerta()const;
	virtual Pared* hacerPared()const;
	virtual Habitacion* hacerHabitacion(int n)const;
	//FabricaAbstractaLaberintos* hacerLaberinto();
	//virtual string toString();
};