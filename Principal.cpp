////#include "LaberintoDimensionDesconocida.h"
//#include "FabLaberintoDimensionDesconocida.h"
////#include "LaberintoEncantado.h"
//#include "FabLaberintoEncantado.h"
//#include "FabricaLaberintoJurasico.h"
////#include "LaberintoJurasico.h"
////#include "Componente.h"
////#include "Composite.h"
//#include "LaberintosComposite.h"
//#include "Componente.h"
//#include <fstream>
//int main() {
//	int opc;
//	FabricaAbstractaLaberintos* fldd = NULL;
//	Componente* ldd = NULL;
//	Componente* lc = new LaberintosComposite("Laberintos");
//
//	FabricaAbstractaLaberintos* fle = NULL;
//	Componente* le = NULL;
//
//	FabricaAbstractaLaberintos* flj = NULL;
//	Componente* lj = NULL;
//
//	do {
//		system("cls");
//		cout << "					BIENVENIDO AL SISTEMA DE CREACION DE LABERINTOS" << endl;
//		cout << endl;
//		cout << "1) Crear laberinto de dimension desconocida" << endl;
//		cout << "2) Crear laberinto encantado" << endl;
//		cout << "3) Crear laberinto jurasico" << endl;
//		cout << "4) Ver laberintos" << endl;
//		cout << "5) Salir" << endl;
//
//		cin >> opc;
//
//		switch (opc)
//		{
//		case 1:
//			system("cls");
//			fldd = new FabLaberintoDimensionDesconocida();
//			ldd = new LaberintoDimensionDesconocida();
//			ldd->crearLaberinto(fldd);
//			
//			lc->agregar(ldd);
//			//lc->guardarLaberintos();
//			system("pause");
//			break;
//		case 2:
//			system("cls");
//			fle = new FabLaberintoEncantado();
//			le = new LaberintoEncantado();
//			le->crearLaberinto(fle);
//			lc->agregar(le);
//			system("pause");
//			break;
//		case 3:
//
//			flj = new FabLaberintoJurasico();
//			lj = new LaberintoJurasico();
//			lj->crearLaberinto(flj);
//			lc->agregar(lj);
//			break;
//		case 4:
//			system("cls");
//			cout << "Laberintos" << endl;
//			cout << endl;
//			cout << lc->toString() << endl;
//			lc->guardarLaberintos();
//			system("pause");
//		}
//	} while (opc >= 1 && opc <= 4);
//	return 0;
//}