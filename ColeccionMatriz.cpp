#include "ColeccionMatriz.h"

ColeccionMatriz::ColeccionMatriz(int f, int c)
{
	numFil = f;
	numCol = c;
	m = new LugarDelMapa * *[numFil];
	for (int i = 0; i < numFil; i++)
	{
		m[i] = new LugarDelMapa * [numCol];
	}

	for (int i = 0; i < numFil; i++)
	{
		for (int j = 0; j < numCol; j++)
		{
			m[i][j] = NULL;

		}
	}
}

bool ColeccionMatriz::insertar(LugarDelMapa*p,int f,int c)
{
	for (int i = 0; i < numFil; i++)
	{
		for (int j = 0; j < numCol; j++)
		{
			if (m[f][c] == NULL)
			{
				m[f][c] = p;
				return true;
			}
		}
	}
	return false;
}

string ColeccionMatriz::toString()
{
	stringstream s;
	for (int i = 0; i < numFil; i++) {
		for (int j = 0; j < numCol; j++) {
			if (m[i][j] != NULL) {
				s << m[i][j]->toString();
			
			}
			else {
				s << "           ";
			}
		}
		s << endl;
	}
	////s << endl << endl;
	/*for (int i = 0; i < numFil; i++)
	{
		for (int j = 0; j < numCol; j++)
		{
			if (m[i][j] != NULL)
			{
				s << "[" << i << "]" << "[" << j << "]  " << endl << m[i][j]->toString() << endl;
			}
		}
	}*/
	return s.str();
}

void ColeccionMatriz::setPosicion(LugarDelMapa*lm, int fila, int col)
{
	m[fila][col] = lm;
}

ColeccionMatriz::~ColeccionMatriz()
{
	for (int i = 0; i < numFil; i++)
	{
		for (int j = 0; j < numCol; j++)
		{
			delete m[i][j];
		}
	}

	for (int i = 0; i < numFil; i++)
	{
		delete[] m[i];
	}
	delete[]m;
}

