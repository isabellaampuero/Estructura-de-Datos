// EjercicioMatriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Matrix.h"

#define MAX 20
using namespace std;

int main()
{
	int matriz[MAX][MAX], fil, col, may, opc;
	float prom;
	Matrix m1; //se crea el objeto m1 de la clase Matrix
	do {
		cout << "Ingrese el numero de filas: ";
		cin >> fil;
	} while ((fil <= 0) || (fil > MAX));

	do {
		cout << "Ingrese el numero de columnas: ";
		cin >> col;
	} while ((col <= 0) || (col > MAX));

	m1.set_fil(fil);
	m1.set_col(col);
	
	//Menu
	do {
		cout << "\t Menu\n";
		cout << "\t ====\n\n";
		cout << "(1) Cargar Matriz\n";
		cout << "(2) Mostrar Matriz\n";
		cout << "(3) Promedio Matriz\n";
		cout << "(4) Mayor Matriz\n";
		cout << "(0) Salir\n";
		cout << "Opcion:";
		cin >> opc;
		switch (opc) {
		case 1: m1.cargarmat(matriz, fil, col);
			break;
		case 2: m1.mostrarmat(matriz);
			break;
		case 3: prom = m1.promedio(matriz, fil, col);
			cout << "El valor promedio es: " << prom;
			break;
		case 4: cout << "El mayor es: " << m1.mayor(matriz, fil, col);
			break;
		case 0: cout << "Salir\n";
			break;
		default: cout << "Error\n";
			break;
		}

		system("cls"); // Limpie la pantalla y funciona stdlib
	} while (opc != 0);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
