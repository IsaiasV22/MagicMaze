#pragma once
#include "ColeccionMatriz.h"
#include "FabLaberintoEncantado.h"
#include "Componente.h"
class LaberintoEncantado : public Componente {
private:
	ColeccionMatriz* matriz;
public:
	LaberintoEncantado();
	//virtual void agregarHabitacion(Habitacion*);
	virtual FabricaAbstractaLaberintos* crearLaberinto(FabricaAbstractaLaberintos*);
	virtual string toString() const ;
	virtual bool agregar(Componente*);
	virtual void guardarLaberintos();
	virtual ColeccionMatriz* getMatriz();
};