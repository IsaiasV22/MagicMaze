#include "Controladora.h"
/*
Programacion 2
Ciclo lectivo: Segundo ciclo
Prof: Santiago Caamaño Polini
Estudiantes:
-Jenson Pérez González | 402570448
-Isaias Viquez Soto | 402580631
Descripcion:
Creador de laberintos de 3 tipos distintos
*/

int main() {
	Controladora* controladora = new Controladora();
	controladora->controlPrincipal();
	controladora->~Controladora();
	return 0;
}