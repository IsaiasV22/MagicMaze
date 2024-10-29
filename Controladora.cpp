#include "Controladora.h"

Controladora::Controladora()
{
	sp = new SuperClase();
}

Controladora::~Controladora()
{
	delete sp;
}

void Controladora::controlPrincipal()
{
	int opc;
	do {

		opc = Vista::menuPrincipal();
		switch (opc) {
		case 1:
			control1(); break;
		case 2:
			control2(); break;
		case 3:
			control3(); break;
		case 4:
			control4(); break;
		}
	} while (opc >= 1 && opc <= 4);
}

void Controladora::control1()
{
	Vista::creaLaberintoDimensionDesconocida(sp);
	system("pause"); system("cls");
}

void Controladora::control2()
{
	Vista::creaLaberintoEncantado(sp);
	system("pause"); system("cls");
}

void Controladora::control3()
{
	Vista::creaLaberintoJurasico(sp);
	system("pause"); system("cls");
}

void Controladora::control4()
{
	Vista::mostrarLaberintos(sp);
	Vista::guardaLaberintos(sp);
	system("pause"); system("cls");
}
