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
int Multiplicacion(int a, int b)
{
	return a * b;
}
int Division(int a, int b)
{
	return a / b;
}
int Calculadora(int a,int b, char operador)
{
	if(operador == '+')
	{
		return suma( a , b);
	}
	if(operador == '-')
	{
		return Resta(a , b);
	}
	if(operador == '*')
	{
		return Multiplicacion(a , b);
	}
	if(operador == '/')
	{
		return Division(a , b);
	}
}
int main(int argc, char** argv) 
{
	int numero1 = 0, numero2 = 0; 
	char operador;
	
	cout << " CALCULADORA CON FUNCIONES" << endl;
	
	cout << "\n Ingrese el valor de a :";
	cin>>numero1;
	cout <<"\n Ingrese el valor de b :";
	cin>>numero2;
	cout <<"\n Ingrese el operador (+ - * /)";
	cin>>operador;
	
	cout << "\n El Resultado "<<numero1<<operador<<numero2<< " es :" <<Calculadora(numero1,numero2,operador);
	
	return 0;
}
