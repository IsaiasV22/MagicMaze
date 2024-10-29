#pragma once
#include "Puerta.h"
#include "Habitacion.h"

class PuertaPortalMagico : public Puerta  {
public:
	PuertaPortalMagico();
	virtual string toString() const;
};