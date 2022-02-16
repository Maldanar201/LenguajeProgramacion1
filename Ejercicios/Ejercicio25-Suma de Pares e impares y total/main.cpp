#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	//Declaracion de Variables
	int pares = 0, inicio = 0, final = 0, impares = 0, total = 0;
	int i = 0;
	
	//ingreso de Datos
	cout << " Suma de pares e impares y total "<< endl;
	
	cout << "\n Ingrese el valor de incio : ";
	cin >> inicio;
	cout << "\n Ingrese el valor de Final : ";
	cin >> final;
	
	
	//desarrollo
	for(i = inicio; i <= final; i++)
	{
		
	
		if(i % 2 == 0)
		{
			pares = pares + i;
		}
		cout << i<<" ";
		
		if(i % 2 != 0)
		{
			impares = impares + i;
		}
		
	}
	total = pares + impares;
	
	cout<<endl;
	cout<< "\n Total Pares : "<< pares;
	cout<< "\n Total Impares : "<< impares << endl;
	cout<< " Suma total Pares e Impares :"<< total;
	
	return 0;
}
