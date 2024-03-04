// Vectorej1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "conio.h"
#include "vector.h"  //Declarar el header de la clase

#define MAX 10

using namespace std;

void main() {

	int vec[MAX], n, op;
	Vector vector1;  // Declarando el objeto vector1 de la clase vector
	do {
		cout << "Ingrese el tamanio del vector : ";
		cin >> n;
	} while ((n > MAX) || (n <= 0));
	do {
		cout << "-----       M E N U        -----" << endl;
		cout << "|1.- Cargar Vector.            |" << endl;
		cout << "|2.- Mostrar Vector.           |" << endl;
		cout << "|3.- Ordenar Vector.           |" << endl;
		cout << "|0.- Salir                     |" << endl;
		cout << "--------------------------------" << endl;
		cout << " Elija una opcion" << endl;
		cin >> op;
		switch (op) {
		case 1:
			vector1.cargarVector(vec, n);  //Llamar al metodo
			break;
		case 2:
			vector1.mostrarVector(vec, n);
			break;
		case 3:
			vector1.ordenarVector(vec, n);
			break;
		case 0:
			cout << "Salir" << endl;
			break;
		default:
			cout << "Error: Opcion no valida..." << endl;
			break;
		}
	} while (op != 0);
	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
