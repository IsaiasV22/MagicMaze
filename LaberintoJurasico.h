#pragma once
#include "ColeccionMatriz.h"
#include "FabricaLaberintoJurasico.h"
#include "Componente.h"
class LaberintoJurasico : public Componente{
private:
	ColeccionMatriz* matriz;
public:
	LaberintoJurasico();
	//virtual void agregarHabitacion(Habitacion*);
	virtual FabricaAbstractaLaberintos* crearLaberinto(FabricaAbstractaLaberintos*);
	virtual string toString() const;
	virtual bool agregar(Componente*);
	virtual void guardarLaberintos();
	virtual ColeccionMatriz* getMatriz();
};