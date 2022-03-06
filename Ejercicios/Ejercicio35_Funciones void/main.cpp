#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void imprimirCaracteres(string caracter, int final )
{
	int inicio = 0;
	
	for(inicio = 0; inicio < final; inicio++)
	{
		cout << caracter;		
	}
	cout << endl;
}

int main(int argc, char** argv)
{
	
	string caracter1 = " ";
	
	cout << " CONOCIENDO LA FUNCION VOID "<< endl;
	cout << "****************************"<< endl;
	
	cout << " Ingrese el caracter que desea Imprimir :";
	cin>>caracter1;
	
	
	imprimirCaracteres(caracter1, 30);
	cout << " *********** CONOCIENDO LA FUNCION VOID ********** "<< endl;
	imprimirCaracteres(caracter1, 30);
	
	return 0;
}
