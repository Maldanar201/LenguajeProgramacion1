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
	if( b == 0)
	{
		throw "\n No se puede dividir entre 0 ";
	}
	return a / b;
}
int Calculadora(int a,int b, char operador)
{
	switch(operador)
	{
		case '+':
			return suma(a,b);
		case '-':
			return Resta(a,b);
		case '*':
			return Multiplicacion(a,b);
		case '/':
			return Division(a,b);
		default:
			break;
	}
	throw "\n EL OPERADOR NO EXISTE "; // mensaje para error
}
int main(int argc, char** argv) 
{
	int numero1 = 0, numero2 = 0; 
	char operador;
	int resultado = 0;
	
	cout << " CALCULADORA CON FUNCIONES" << endl;
	
	cout << "\n Ingrese el valor de a :";
	cin>>numero1;
	cout <<"\n Ingrese el valor de b :";
	cin>>numero2;
	cout <<"\n Ingrese el operador (+ - * /)";
	cin>>operador;
	
	try // intenta hacer
	{
		resultado = Calculadora(numero1,numero2,operador);
		cout << "\n El Resultado "<<numero1<<" "<<operador<<" "<<numero2<< " es :"<< resultado;
	}
	catch(const char* error) // cactura error y reproduce mensaje
	{
		cout <<error;
	}

	
	return 0;
}
