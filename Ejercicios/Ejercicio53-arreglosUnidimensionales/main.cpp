#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int numero[5]; // declaracion de arreglo unidimensional 
	
	//asignacion al indice del arreglo
	numero[0] = 10; //indice siempre comienza en cero 
	numero[1] = 5;
	numero[2] = 50;
	numero[3] = 25;
	numero[4] = 75;
	
	//Lectura de los valores de un arreglo unidimensional
	
	cout << numero[0] << endl;
	cout << numero[1] << endl;
	cout << numero[2] << endl;
	cout << numero[3] << endl;
	cout << numero[4] << endl;
	
	return 0;
}
