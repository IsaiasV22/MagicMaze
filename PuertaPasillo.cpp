#include "PuertaPasillo.h"

PuertaPasillo::PuertaPasillo()
{
	
}



string PuertaPasillo::toString() const
{
	stringstream s;
	s << "| Pasillo|";
	return s.str();
}
