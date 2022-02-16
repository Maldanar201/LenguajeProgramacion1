#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	//Declaracion de Variables
	int pares = 0, inicio = 0;
	
	//desarrollo
	for(inicio = 1; inicio <= 100; inicio++)
	{
	/*	if(inicio == 2 or inicio == 4 or inicio == 6 or inicio == 8 or inicio == 10)
		{
			pares = pares + inicio;
		}
		cout << inicio<<" "<< endl; */  // sustituir el if por el operador % modulo
		if(inicio % 2 == 0)
		{
			pares = pares + inicio;
		}
		cout << inicio<<" ";
	}
	cout<<endl;
	cout<< "\n Total Pares : "<< pares;
	
	return 0;
}
