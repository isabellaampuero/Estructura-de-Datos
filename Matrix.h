#include <iostream>
#pragma once
#define MAX 20
class Matrix
{
private: //atributos
	int MAT[MAX][MAX];
	int fil;
	int col;

public: 
	Matrix(); //constructor
	~Matrix(); //destructor
	//metodos que modifican o retornan los atributos
	void set_fil(int _fil); 
	int get_fil();
	void set_col(int _col);
	int get_col();

	void mostrarmat(int MAT[MAX][MAX]);
	void cargarmat(int MAT[MAX][MAX], int m, int n);
	float promedio(int MAT[MAX][MAX], int m, int n);
	int mayor(int MAT[MAX][MAX], int m, int n);


};

