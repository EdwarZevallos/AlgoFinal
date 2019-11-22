#include <iostream>
#include <conio.h>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "ArbolAVL.h"
#include "cAlmacenamiento.h"
#include "Imagenes.h"
#include "Escaneo.h"

using namespace std;
using namespace System;
using namespace System::IO;

bool uso = false;

void Imprime(cAlmacenamiento ele) {

	cout << "**************************************************" << endl;
	cout << "Nombre => " << ele.GET_Nombre() << endl;
	cout << "Contiene => " << ele.GET_Contiene() << endl;
	cout << "Primera Letra => " << ele.GET_LetraInicial() << endl;
	cout << "Ultima letra => " << ele.GET_LetraFinal() << endl;
	cout << "Anio => " << ele.GET_Anio() << endl;
	cout << "Mes => " << ele.GET_Mes() << endl;
	cout << "Dia => " << ele.GET_Dia() << endl;
	cout << "Extension => " << ele.GET_Extension() << endl;
	cout << "Tamanio(KB) => " << ele.GET_Tamanio() << "KB" << endl;
	cout << "Tamanio(MB) => " << ele.GET_Tamanio()/1024  << " MB"<< endl;
	cout << "Tamanio(GB) => " << ele.GET_Tamanio()/1048578 << " GB" << endl;
	cout << "**************************************************" << endl << endl << endl;
}

void Ejecutor() {
	Imagen mostrar;
	Escaneo<cAlmacenamiento,int> escanear;
	mostrar.Titulo();

	ArbolAVL<cAlmacenamiento, int>*arbol;
	ArbolAVL<cAlmacenamiento, int>*arbolletra;

	string direccion;
	bool verdad = true;
	bool uso = false;
	int opcion;
	char temp[10];

	while (verdad) {
		system("cls");
		cout << endl << endl;
		cout << "\t\t\t\t\to------------------------------------------------o" << endl;
		cout << "\t\t\t\t\t|     File-Ex en un ArbolAVL                     |" << endl;
		cout << "\t\t\t\t\to------------------------------------------------o" << endl;
		cout << "\t\t\t\t\t| 1.- Ingresar Ruta del Archivo(Peso).           |" << endl;
		cout << "\t\t\t\t\t| 2.- Ingresar Ruta del Archivo(PrimeraLetra).   |" << endl;
		cout << "\t\t\t\t\t| 3.- Ingresar Ruta del Archivo(UltimaLetra).    |" << endl;
		cout << "\t\t\t\t\t| 4.- Ingresar Ruta del Archivo(ContieneLetra).  |" << endl;
		cout << "\t\t\t\t\t| 5.- Imprime arbol ascendente.                  |" << endl;
		cout << "\t\t\t\t\t| 6.- Imprime arbol desendente.                  |" << endl;
		cout << "\t\t\t\t\t| 7.- Creditos.                                  |" << endl;
		cout << "\t\t\t\t\t| 8.- Salir.                                     |" << endl;
		cout << "\t\t\t\t\to------------------------------------------------o" << endl;
		cout << "\t\tIngrese una opcion => "; cin >> opcion;

		cin.getline(temp, 10);
		switch (opcion){
		case 1: {
			arbol = new ArbolAVL<cAlmacenamiento, int>(Imprime);
			cout << endl;
			Console::SetCursorPosition(0, 16);
			cout << "\to------------------------------------------------------------------------------------------------------o" << endl;
			Console::SetCursorPosition(0, 18);
			cout << "\to------------------------------------------------------------------------------------------------------o" << endl;
			Console::SetCursorPosition(0, 17);
			cout << "\to  Ingrese la dirrecion a escanear: "; getline(cin, direccion);
			if (direccion == "") { cout << "\n\n\tColoque una direccion"; }
			else {
				if (Directory::Exists(msclr::interop::marshal_as<String^>(direccion))) {
					escanear.EsaneaPeso(msclr::interop::marshal_as<String^>(direccion), arbol);
					uso = true;
				}
				else {
					Console::SetCursorPosition(0, 20);
					cout << "\tLa direccion no existe";
				}
			}
			_getch();

			break;
			}
		case 2: {
			arbol = new ArbolAVL<cAlmacenamiento, int>(Imprime);
			cout << endl;
			Console::SetCursorPosition(0, 16);
			cout << "\to------------------------------------------------------------------------------------------------------o" << endl;
			Console::SetCursorPosition(0, 18);
			cout << "\to------------------------------------------------------------------------------------------------------o" << endl;
			Console::SetCursorPosition(0, 17);
			cout << "\to  Ingrese la dirrecion a escanear: "; getline(cin, direccion);
			if (direccion == "") { cout << "\n\n\tColoque una direccion"; }
			else {
				if (Directory::Exists(msclr::interop::marshal_as<String^>(direccion))) {
					escanear.EscaneaPrimeraLetra(msclr::interop::marshal_as<String^>(direccion), arbol);
					uso = true;
				}
				else {
					Console::SetCursorPosition(0, 20);
					cout << "\tLa direccion no existe";
				}
			}
			_getch();

			break;
		}
		case 3: {
			arbol = new ArbolAVL<cAlmacenamiento, int>(Imprime);
			cout << endl;
			Console::SetCursorPosition(0, 16);
			cout << "\to------------------------------------------------------------------------------------------------------o" << endl;
			Console::SetCursorPosition(0, 18);
			cout << "\to------------------------------------------------------------------------------------------------------o" << endl;
			Console::SetCursorPosition(0, 17);
			cout << "\to  Ingrese la dirrecion a escanear: "; getline(cin, direccion);
			if (direccion == "") { cout << "\n\n\tColoque una direccion"; }
			else {
				if (Directory::Exists(msclr::interop::marshal_as<String^>(direccion))) {
					escanear.EscaneaUltimaLetra(msclr::interop::marshal_as<String^>(direccion), arbol);
					uso = true;
				}
				else {
					Console::SetCursorPosition(0, 20);
					cout << "\tLa direccion no existe";
				}
			}
			_getch();

			break;
		}

		case 4: {
			arbol = new ArbolAVL<cAlmacenamiento, int>(Imprime);
			cout << endl;
			Console::SetCursorPosition(0, 16);
			cout << "\to------------------------------------------------------------------------------------------------------o" << endl;
			Console::SetCursorPosition(0, 18);
			cout << "\to------------------------------------------------------------------------------------------------------o" << endl;
			Console::SetCursorPosition(0, 17);
			cout << "\to  Ingrese la dirrecion a escanear: "; getline(cin, direccion);
			if (direccion == "") { cout << "\n\n\tColoque una direccion"; }
			else {
				if (Directory::Exists(msclr::interop::marshal_as<String^>(direccion))) {
					escanear.EsaneaContiene(msclr::interop::marshal_as<String^>(direccion), arbol);
					uso = true;
				}
				else {
					Console::SetCursorPosition(0, 20);
					cout << "\tLa direccion no existe";
				}
			}
			_getch();

			break;
		}

		case 5: {
			if (uso == true) {
				system("cls");
				cout << "\t\t\t\t\t\t=============================" << endl;
				cout << "\t\t\t\t\t\to Arbol en order Ascendente o" << endl;
				cout << "\t\t\t\t\t\t=============================" << endl;
				cout << endl << endl;
				arbol->inOrder();
			}
			else {
				cout << "\t\t\t\t\t\t=============================" << endl;
				cout << "\t\t\t\t\t\to Aun no inicio la busqueda o" << endl;
				cout << "\t\t\t\t\t\t=============================" << endl;
			}
			_getch();
			break;
			}
		case 6: {
			if (uso == true) {
				system("cls");
				cout << "\t\t\t\t\t\t=============================" << endl;
				cout << "\t\t\t\t\t\to Arbol en order Desendente o" << endl;
				cout << "\t\t\t\t\t\t=============================" << endl;
				cout << endl << endl;
				arbol->Desendente();
			}
			else {
				cout << "\t\t\t\t\t\t=============================" << endl;
				cout << "\t\t\t\t\t\to Aun no inicio la busqueda o" << endl;
				cout << "\t\t\t\t\t\t=============================" << endl;
			}
			_getch();
			break;
		}

		case 7: {
			mostrar.Creditos();
			break;
		}
		case 8: {
			verdad = false;
			break;
		}
		default: {
			break;
			}
		}
	}
	cout << "\t\tGracias por usar el programa, hasta pronto" << endl;

	_getch();
}

int main() {
	Ejecutor();
	return 0;
}