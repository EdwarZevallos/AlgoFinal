#pragma once
#include "iostream"
#include "conio.h"

using namespace std;
using namespace System;

class Imagen{
public:
	Imagen(){}

	void Titulo() {
		int a = 18;
		int b = 5;
		Console::SetCursorPosition(a, b - 1);
		cout << "o----------------------------------------------------------------------------------o" << endl;
		Console::SetCursorPosition(a, b);
		cout << "|  **********   **********   *            **********      **********   **      **  |" << endl;
		Console::SetCursorPosition(a, b + 1);
		cout << "|  **               **       *            **              **            **    **   |" << endl;
		Console::SetCursorPosition(a, b + 2);
		cout << "|  **               **       *            **              **             **  **    |" << endl;
		Console::SetCursorPosition(a, b + 3);
		cout << "|  **               **       *            **              **              ****     |" << endl;
		Console::SetCursorPosition(a, b + 4);
		cout << "|  **********       **       *            **********      **********       **      |" << endl;
		Console::SetCursorPosition(a, b + 5);
		cout << "|  **               **       *            **********      **********       **      |" << endl;
		Console::SetCursorPosition(a, b + 6);
		cout << "|  **               **       *            **              **              ****     |" << endl;
		Console::SetCursorPosition(a, b + 7);
		cout << "|  **               **       *            **              **             **  **    |" << endl;
		Console::SetCursorPosition(a, b + 8);
		cout << "|  **               **       *            **              **            **    **   |" << endl;
		Console::SetCursorPosition(a, b + 9);
		cout << "|  **           **********   **********   **********      **********   **      **  |" << endl;
		Console::SetCursorPosition(a, b + 10);
		cout << "o----------------------------------------------------------------------------------o" << endl;
		cout << endl << endl << endl;
		Console::SetCursorPosition(28, 15);
		cout << "°                                                                 °" << endl;
		Console::SetCursorPosition(28, 16);
		cout << "|  Bienvenido, este proyecto es un explorar una ruta de archivo.  |" << endl;
		Console::SetCursorPosition(28, 17);
		cout << "|  \t\t\tPresione una tecla para continuar.            |" << endl;
		Console::SetCursorPosition(28, 18);
		cout << "°-----------------------------------------------------------------°" << endl;
		Console::SetCursorPosition(0, 20);
		cout << "\t\to---------------------------------------------------------------------------------------o" << endl;
		Console::SetCursorPosition(0, 21);
		cout << "\t\to  Este programa se encarga de encontrar todos los elementos de un archivo              o" << endl;
		Console::SetCursorPosition(0, 22);
		cout << "\t\to  Todo estos datos ingresan a una nodo que posteriormente son enviados a una ArbolAVL  o" << endl;
		Console::SetCursorPosition(0, 23);
		cout << "\t\to  Finalmente son imprimidos de forma ordenada dependiendo el tamanio                   o" << endl;
		Console::SetCursorPosition(0, 24);
		cout << "\t\to---------------------------------------------------------------------------------------o" << endl;
		_getch();
		system("cls");
	}

	void Creditos() {
		cout << "\to-----------------------------------------------------------------------------------------------------o" << endl;
		cout << "\t| Este programa fue codificado para poder cumplir el trabajo final de Algoritmo y Estructura de Datos |" << endl;
		cout << "\t| Los integrantes son:                                                                                |" << endl;
		cout << "\t|                 Luciano Lopez                                                                       |" << endl;
		cout << "\t|                 Wilmer Zevallos                                                                     |" << endl;
		cout << "\to-----------------------------------------------------------------------------------------------------o" << endl;
		_getch();
		system("cls");
	}




};