#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;


double numero = 0;

double raizCuadrada()
{	
	double resultado = 0;
	
	resultado = sqrt(numero);
	
	return resultado;	
}


int main(int argc, char** argv) 
{
	cout << "CALCULO DE RAIZ CUADRADA"<<endl;
	
		
	cout<<"\n Ingrese un numero : ";
	cin>>numero;
		
	cout <<"\n La Raiz Cuadrada de "<< numero << " es : "<<raizCuadrada() <<endl;
	cout <<endl;
	
	system("pause");
	return 0;
}
