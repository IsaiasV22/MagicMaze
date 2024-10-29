#include "Vista.h"
int Vista::menuPrincipal()
{
	int opc;
	system("cls");
	cout << "					BIENVENIDO AL SISTEMA DE CREACION DE LABERINTOS" << endl;
	cout << endl;
	cout << "1) Crear laberinto de dimension desconocida y guardarlo" << endl;
	cout << "2) Crear laberinto encantado y guardarlo" << endl;
	cout << "3) Crear laberinto jurasico y guardarlo" << endl;
	cout << "4) Ver laberintos y guardarlos" << endl;
	cout << "5) Salir" << endl;

	cin >> opc;
	return opc;
}

void Vista::creaLaberintoDimensionDesconocida(SuperClase*lc)
{
	FabricaAbstractaLaberintos* fldd;
	Componente* ldd;
	
	fldd = new FabLaberintoDimensionDesconocida();
	ldd = new LaberintoDimensionDesconocida();
	ldd->crearLaberinto(fldd);

	lc->agregarLabDimensionDesconocida(ldd);
	//lc->guardarLaberintos();
	
}

void Vista::creaLaberintoEncantado(SuperClase*lc)
{
	FabricaAbstractaLaberintos* fle;
	Componente* le;

	system("cls");
	fle = new FabLaberintoEncantado();
	le = new LaberintoEncantado();
	le->crearLaberinto(fle);
	lc->agregarLabEncantado(le);
	
}

void Vista::creaLaberintoJurasico(SuperClase*lc)
{
	FabricaAbstractaLaberintos* flj;
	Componente* lj;

	flj = new FabLaberintoJurasico();
	lj = new LaberintoJurasico();
	lj->crearLaberinto(flj);
	lc->agregarLabJurasico(lj);
}

void Vista::mostrarLaberintos(SuperClase*lc)
{
	cout << "Laberintos" << endl;
	cout << endl;
	cout << lc->toString() << endl;
}

void Vista::guardaLaberintos(SuperClase* lc)
{
	lc->guardaLaberintos();
}
