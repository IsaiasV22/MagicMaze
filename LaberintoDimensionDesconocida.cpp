#include "LaberintoDimensionDesconocida.h"

LaberintoDimensionDesconocida::LaberintoDimensionDesconocida()
{
	matriz = NULL;
}



FabricaAbstractaLaberintos* LaberintoDimensionDesconocida::crearLaberinto(FabricaAbstractaLaberintos* fdd)
{
	fdd = new FabLaberintoDimensionDesconocida();
	Habitacion* h1 = NULL;
	Puerta* pp1 = NULL;
	//FabLaberintoDimensionDesconocida* fdd = NULL;
	
	int filas, columnas, opc, filasalon, columnasalon, numeroHabitacion, opcpuerta, filapasillo, columnapasillo;
	cout << "Sistema de creacion de un laberinto de Dimension Desconocida, es importante colocar en los espacios de" << endl;
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
		cout << "1) Agregar un salon" << endl;
		cout << "2) Agregar un pasillo" << endl;
		cout << "3) Salir" << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
			cout << "Digite el numero de salon: "; cin >> numeroHabitacion;
			cout << endl;

			h1 = fdd->hacerHabitacion(numeroHabitacion);

			cout << "Digite la fila y la columna para el salon:" << endl;
			cout << "Fila: "; cin >> filasalon;
			cout << endl;
			cout << "Columna: "; cin >> columnasalon;
			cout << endl;
			matriz->setPosicion(h1, filasalon, columnasalon);
			cout << matriz->toString() << endl;
			break;
		case 2:

			pp1 = fdd->hacerPuerta();
			cout << "Digite la fila y la columna para el pasillo:" << endl;
			cout << "Fila: "; cin >> filapasillo;
			cout << endl;
			cout << "Columna: "; cin >> columnapasillo;
			cout << endl;
			matriz->setPosicion(pp1, filapasillo, columnapasillo);
			cout << matriz->toString() << endl;
			fstream archivo("LaberintoDD.txt", ios::out | ios::app);
			if (archivo.is_open()) {
				archivo << matriz->toString();
				archivo.close();
			}
			break;
		}
	} while (opc >= 1 && opc < 3);

	return fdd;
}

string LaberintoDimensionDesconocida::toString() const
{
	stringstream s;
	cout << matriz->toString() << endl;
	return s.str();
}

bool LaberintoDimensionDesconocida::agregar(Componente*)
{
	return false;
}

void LaberintoDimensionDesconocida::guardarLaberintos()
{
	fstream archivo("LaberintoDD.txt", ios::out | ios::app);
	if (archivo.is_open()) {
		archivo << toString();
		archivo.close();
	}
}

ColeccionMatriz* LaberintoDimensionDesconocida::getMatriz()
{
	return matriz;
}


