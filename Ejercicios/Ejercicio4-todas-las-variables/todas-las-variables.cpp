#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << " TIPOS DE VARIABLES "<< endl;
	cout << "\n variables numericas "<< endl;
	cout << " 'int' entero "<< endl;
	cout << " 'float' numero flotante con digitos decimales"<< endl;
	cout << " 'double' incleye todos los realeas con numeros decimal"<< endl;
	
	cout << "\n Cadena de Caracteres "<< endl;
	cout << " 'char' un caracter"<< endl;
	cout << " 'string' cadena de caracteres"<< endl;
	
	cout << "\n booleanos"<< endl;
	cout << " 'bool' solo pueden contener true o false "<< endl;
	
	bool valor_Boolean;
	valor_Boolean = true;
	int valor_Entero = 15;
	double valor_Double = 20.99;
	string valor_String = "Hola Como estan";
	char valor_Char = 'B';
	
	cout << "\n Valor Boolean :  " << valor_Boolean << endl;
	cout << " Valor Entero  :  " << valor_Entero << endl;
	cout << " Valor Double  :  " << valor_Double << endl;
	cout << " Valor string  :  " << valor_String << endl;
	cout << " Valor Char    :  " << valor_Char << endl;
    
    return 0;
}
