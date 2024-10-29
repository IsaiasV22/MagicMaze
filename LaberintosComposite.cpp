#include "LaberintosComposite.h"

LaberintosComposite::LaberintosComposite()
{
	nombre = "";
}

LaberintosComposite::LaberintosComposite(string n)
{
	nombre = n;
}

LaberintosComposite::~LaberintosComposite()
{
}

string LaberintosComposite::toString() const
{
    stringstream s;
    for (int i = 0; i < numfila; i++) {
        for (int j = 0; j < numColumna; j++) {
            if (mat[i][j] != NULL) {
                s << mat[i][j]->toString();

			}
			else {
				s << "           ";
			}
        }
        s << endl;
    }
	return s.str();
}

bool LaberintosComposite::agregar(Componente*c)
{
	for (int i = 0; i < numfila; i++)
	{
		for (int j = 0; j < numColumna; j++)
		{
			if (mat[i][j] == NULL)
			{
				mat[i][j] = c;
				return true;
			}
		}
	}
	return false;
}

FabricaAbstractaLaberintos* LaberintosComposite::crearLaberinto(FabricaAbstractaLaberintos*)
{
	return nullptr;
}

void LaberintosComposite::guardarLaberintos()
{
	//LaberintosComposite* lc = new LaberintosComposite();
	fstream archivo("Laberintos.txt", ios::out | ios::app);
	if (archivo.is_open()) {
		for (int i = 0; i < numfila; i++)
		{
			for (int j = 0; j < numColumna; j++)
			{
				if (mat[i][j] != NULL)
				{
					archivo << mat[i][j]->getMatriz()->toString();
					
				}
			}
		}
		 
		archivo.close();
	}
	
}

ColeccionMatriz* LaberintosComposite::getMatriz()
{
	return nullptr;
}

