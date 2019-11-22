#pragma once
#include "ArbolAVL.h"
#include "iostream"
#include "cAlmacenamiento.h"

using namespace std;
using namespace System;
using namespace System::IO;

template<class Alma,class Int>
class Escaneo {
public:
	Escaneo() {
	}

	void EscaneaPrimeraLetra(String^ carpeta, ArbolAVL<Alma, Int>*&arbol) {
		auto files = Directory::GetFiles(carpeta, "*", SearchOption::AllDirectories);
		int archivos = 0;

		for each  (auto item in files)
		{
			cAlmacenamiento almacen;
			almacen.SET_Nombre(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			almacen.SET_Contiene(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)).length());
			almacen.SET_LetraInicial(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			almacen.SET_LetraFinal(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			///////////////////////////////////////////////////////
			almacen.SET_Anio(FileInfo(item).CreationTime.Year);
			almacen.SET_Mes(FileInfo(item).CreationTime.Month);
			almacen.SET_Dia(FileInfo(item).CreationTime.Day);
			///////////////////////////////////////////////////////
			almacen.SET_Extension(msclr::interop::marshal_as<string>(FileInfo(item).Extension));
			almacen.SET_Tamanio(FileInfo(item).Length);

			arbol->Insertar(almacen, int(almacen.GET_LetraInicial()));
			archivos++;
		}

		cout << endl << endl;
		if (archivos >= 1000) { cout << "Hay un total de " << archivos / 1000 << " x 1000 archivos." << endl; }
		else { cout << "Hay un total de " << archivos << " archivos." << endl; }
		cout << "El arbol fue llenado correctamente segun la primera letra." << endl;
	}

	void EscaneaUltimaLetra(String^ carpeta, ArbolAVL<Alma, Int>*&arbol) {
		auto files = Directory::GetFiles(carpeta, "*", SearchOption::AllDirectories);
		int archivos = 0;

		for each  (auto item in files)
		{
			cAlmacenamiento almacen;
			almacen.SET_Nombre(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			almacen.SET_Contiene(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)).length());
			almacen.SET_LetraInicial(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			almacen.SET_LetraFinal(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			///////////////////////////////////////////////////////
			almacen.SET_Anio(FileInfo(item).CreationTime.Year);
			almacen.SET_Mes(FileInfo(item).CreationTime.Month);
			almacen.SET_Dia(FileInfo(item).CreationTime.Day);
			///////////////////////////////////////////////////////
			almacen.SET_Extension(msclr::interop::marshal_as<string>(FileInfo(item).Extension));
			almacen.SET_Tamanio(FileInfo(item).Length);

			arbol->Insertar(almacen, int(almacen.GET_LetraFinal()));
			archivos++;
		}

		cout << endl << endl;
		if (archivos >= 1000) { cout << "Hay un total de " << archivos / 1000 << " x 1000 archivos." << endl; }
		else { cout << "Hay un total de " << archivos << " archivos." << endl; }
		cout << "El arbol fue llenado correctamente segun la ultima letra." << endl;
	}

	void EsaneaPeso(String^ carpeta, ArbolAVL<Alma, Int>*&arbol) {
		auto files = Directory::GetFiles(carpeta, "*", SearchOption::AllDirectories);
		int archivos = 0;

		for each  (auto item in files)
		{
			cAlmacenamiento almacen;
			almacen.SET_Nombre(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			almacen.SET_Contiene(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)).length());
			almacen.SET_LetraInicial(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			almacen.SET_LetraFinal(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			///////////////////////////////////////////////////////
			almacen.SET_Anio(FileInfo(item).CreationTime.Year);
			almacen.SET_Mes(FileInfo(item).CreationTime.Month);
			almacen.SET_Dia(FileInfo(item).CreationTime.Day);
			///////////////////////////////////////////////////////
			almacen.SET_Extension(msclr::interop::marshal_as<string>(FileInfo(item).Extension));
			almacen.SET_Tamanio(FileInfo(item).Length);

			arbol->Insertar(almacen, int(almacen.GET_Tamanio()));
			archivos++;
		}

		cout << endl << endl;
		if (archivos >= 1000) { cout << "Hay un total de " << archivos / 1000 << " x 1000 archivos." << endl; }
		else { cout << "Hay un total de " << archivos << " archivos." << endl; }
		cout << "El arbol fue llenado correctamente segun el peso." << endl;
	}

	void EsaneaContiene(String^ carpeta, ArbolAVL<Alma, Int>*&arbol) {
		auto files = Directory::GetFiles(carpeta, "*", SearchOption::AllDirectories);
		int archivos = 0;

		for each  (auto item in files)
		{
			cAlmacenamiento almacen;
			almacen.SET_Nombre(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			almacen.SET_Contiene(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)).length());
			almacen.SET_LetraInicial(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			almacen.SET_LetraFinal(msclr::interop::marshal_as<string>(Path::GetFileNameWithoutExtension(item)));
			///////////////////////////////////////////////////////
			almacen.SET_Anio(FileInfo(item).CreationTime.Year);
			almacen.SET_Mes(FileInfo(item).CreationTime.Month);
			almacen.SET_Dia(FileInfo(item).CreationTime.Day);
			///////////////////////////////////////////////////////
			almacen.SET_Extension(msclr::interop::marshal_as<string>(FileInfo(item).Extension));
			almacen.SET_Tamanio(FileInfo(item).Length);

			arbol->Insertar(almacen, almacen.GET_Contiene());
			archivos++;
		}

		cout << endl << endl;
		if (archivos >= 1000) { cout << "Hay un total de " << archivos / 1000 << " x 1000 archivos." << endl; }
		else { cout << "Hay un total de " << archivos << " archivos." << endl; }
		cout << "El arbol fue llenado correctamente segun las palabras que contiene el archivo." << endl;
	}
};