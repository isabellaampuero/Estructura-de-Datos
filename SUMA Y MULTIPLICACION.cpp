// SUMA Y MULTIPLICACION2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
void menu();
int sum(int A, int B);
int mult(int A, int B);
int main()
{
    menu();
    return 0;
}
void menu()
{
    int op, A, B;
    do
    {
        cout << "Menu:" << endl;
        cout << "1.- Suma" << endl;
        cout << "2.- Multiplicacion" << endl;
        cout << "0.- Salir" << endl;
        cout << "Ingresar opcion: " << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Ingresar los dos numeros a sumar: " << endl;
            cin >> A;
            cin >> B;
            cout << "La suma de " << A << " + " << B << " es: " << sum(A, B) << endl;
            break;

        case 2:
            cout << "Ingresar los dos numeros a multiplicar: " << endl;
            cin >> A;
            cin >> B;
            cout << "La multiplicacion de " << A << " * " << B << " es: " << mult(A, B) << endl;
            break;

        case 0:
            cout << "Gracias por usar el programa. :)" << endl;
            break;

        default:
            cout << "ERROR. Ingresar opcion valida." << endl;

        }
    } while (op != 0);
}
int sum(int A, int B)
{
    if (A == 0)
    {
        return B;
    }
    else if (B == 0)
    {
        return A;
    }
    else
    {
        return 1 + sum(A, B - 1);
    }
}
int mult(int A, int B)
{
    if (A == 0 or B == 0)
    {
        return 0;
    }
    else
    {
        return A + mult(A, B - 1);
    }
}