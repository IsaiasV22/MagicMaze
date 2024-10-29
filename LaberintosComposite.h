#pragma once
#include "Composite.h"
#include<fstream>
class LaberintosComposite : public Composite {
private:
	string nombre;
public:
	LaberintosComposite();
	LaberintosComposite(string);
	virtual ~LaberintosComposite();
	virtual string toString() const;
	virtual bool agregar(Componente*);
	virtual FabricaAbstractaLaberintos* crearLaberinto(FabricaAbstractaLaberintos*);
	virtual void guardarLaberintos();
	virtual ColeccionMatriz* getMatriz();
};