#pragma once
#include "LugarDelMapa.h"
#include <sstream>
class ColeccionMatriz
{
private:
	int numFil;
	int numCol;
	LugarDelMapa*** m;
public:
	ColeccionMatriz(int, int);
	bool  insertar(LugarDelMapa*,int,int);
	string toString();
	void setPosicion(LugarDelMapa*, int, int);
	~ColeccionMatriz();
};