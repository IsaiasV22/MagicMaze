#include "LaberintoJurasico.h"

LaberintoJurasico::LaberintoJurasico()
{
	matriz = NULL;
}

FabricaAbstractaLaberintos* LaberintoJurasico::crearLaberinto(FabricaAbstractaLaberintos*flj)
{
	flj = new FabLaberintoJurasico();
	Habitacion* h1 = NULL;
	Puerta* pp1 = NULL;
	//FabLaberintoDimensionDesconocida* fdd = NULL;

	int filas, columnas, opc, filasalon, columnasalon, numeroHabitacion, opcpuerta, filapasillo, columnapasillo;
	cout << "Sistema de creacion de un laberinto Jurasico, es importante colocar en los espacios de" << endl;
	cout << "la matriz las habitaciones y en su seguida posicion sus puertas, en la direccion deseada, para que se de" << endl;
	cout << "las formas de un laberinto" << endl;

	cout << "Digite las filas y columnas para el laberinto:" << endl;
	cout << "Filas: "; cin >> filas;
	cout << endl;
	cout << "Columnas: "; cin >> columnas;
	cout << endl;
	matriz = new ColeccionMatriz(filas, columnas);
	///cout << c1->toString() << endl;
	do {
		cout << "1) Agregar una cueva" << endl;
		cout << "2) Agregar un tunel" << endl;
		cout << "3) Salir" << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
			cout << "Digite el numero de la cueva: "; cin >> numeroHabitacion;
			cout << endl;

			h1 = flj->hacerHabitacion(numeroHabitacion);

			cout << "Digite la fila y la columna para la cueva:" << endl;
			cout << "Fila: "; cin >> filasalon;
			cout << endl;
			cout << "Columna: "; cin >> columnasalon;
			cout << endl;
			matriz->setPosicion(h1, filasalon, columnasalon);
			cout << matriz->toString() << endl;
			break;
		case 2:

			pp1 = flj->hacerPuerta();
			cout << "Digite la fila y la columna para el tunel:" << endl;
			cout << "Fila: "; cin >> filapasillo;
			cout << endl;
			cout << "Columna: "; cin >> columnapasillo;
			cout << endl;
			matriz->setPosicion(pp1, filapasillo, columnapasillo);
			cout << matriz->toString() << endl;
			fstream archivo("LaberintoJurasico.txt", ios::out | ios::app);
			if (archivo.is_open()) {
				archivo << matriz->toString();
				archivo.close();
			}
			break;
		}
	} while (opc >= 1 && opc < 3);

	return flj;
}

string LaberintoJurasico::toString() const
{
	stringstream s;
	cout << matriz->toString() << endl;
	return s.str();
	
}

bool LaberintoJurasico::agregar(Componente*)
{
	return false;
}

void LaberintoJurasico::guardarLaberintos()
{
}

ColeccionMatriz* LaberintoJurasico::getMatriz()
{
	return matriz;
}

