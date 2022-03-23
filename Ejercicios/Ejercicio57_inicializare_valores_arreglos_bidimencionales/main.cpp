#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	cout << " APRENDIENDO ARREGLOS BIDIMENCIONALES "<<endl;
	cout << endl;
//Forma de Inicializar arreglos Bidimensionales #1	
/*	string nombres[3][2]; // arreglo de una matriz de 3x2 3 filas 2 columnas nombre y apellido

	nombres[0][0] = "Juan";
	nombres[0][1] = "Perez";
	
	nombres[1][0] = "Maria";
	nombres[1][1] = "Martinez";
	
	nombres[2][0] = "Pedro";
	nombres[2][1] = "Jimenez";
*/

//Forma de Inicializar arreglos Bidimensionales #2
/*
	string nombres[3][2] =
	{
		{"juan","Perez"},
		{"Maria","Martinez"},
		{"Pedro","Jimenez"},
	};
*/	
	//Forma de Inicializar arreglos Bidimensionales #3
	
	int filas = 4;
	int columnas = 2;
	
	string nombres[filas][columnas] =
	{
		{"juan","Perez"},
		{"Maria","Martinez"},
		{"Pedro","Jimenez"},
		{"Luis","Hernandez"},
	};
	
/*	for( int i = 0; i < 3; i++)
	{
		cout << nombres[i][0]<<" "<<nombres[i][1]<<endl;
	}
*/	
	
	for( int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			cout <<" "<< nombres[i][j];// vese que el espacio entre string se agrego al final o tambien puede hacerlo al inicio 
		}
		
		cout<<endl;
	}
	return 0;
}
