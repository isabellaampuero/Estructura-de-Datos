// ejercicio estudiante.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Estudiante.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declarar un objeto de la clase estudiante
    Estudiante alumno;
    string nombre;
    cout << "Ingrese el nombre: ";
    getline(cin, nombre);
    alumno.set_nombre(nombre); //llamando al metodo set_nombre de la clase Estudiante
    cout << "El nombre del estudiante es: " << alumno.get_nombre();
    cout << "El nombre es: " << nombre;//muestra la variable local
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
