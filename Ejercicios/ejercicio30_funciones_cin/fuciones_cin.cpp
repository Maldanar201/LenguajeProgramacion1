#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int suma(int a, int b)
{
	return a + b;
}

int Resta(int a, int b)
{
	return a - b;
}

int main(int argc, char** argv) 
{
	int numero1 = 0, numero2 = 0; 
	cout << " SUMA DE DOS VARIABLES" << endl;
	
	cout << "\n Ingrese el valor de a :";
	cin>>numero1;
	cout <<"\n Ingrese el valor de b :";
	cin>>numero2;
	
	cout << "\n La Suma es  : "<<suma(numero1,numero2);
	cout << "\n La Resta es : "<<Resta(numero1,numero2);
	return 0;
}

