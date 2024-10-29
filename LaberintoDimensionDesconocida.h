#pragma once
#include "ColeccionMatriz.h"
#include "FabLaberintoDimensionDesconocida.h"
#include "Componente.h"

class LaberintoDimensionDesconocida : public Componente{
private:
	ColeccionMatriz* matriz;
public:
	LaberintoDimensionDesconocida();
	//virtual void agregarHabitacion(Habitacion*);
	virtual FabricaAbstractaLaberintos* crearLaberinto(FabricaAbstractaLaberintos*);
	virtual string toString() const;
	virtual bool agregar(Componente*);
	virtual void guardarLaberintos();
	virtual ColeccionMatriz* getMatriz();
};