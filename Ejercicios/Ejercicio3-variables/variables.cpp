#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);
	
	cout << " TIPOS DE VARIABLES "<< endl;
	cout << "\n variables numericas "<< endl;
	cout << " 'int' entero "<< endl;
	cout << " 'float' numero flotante con digitos decimales"<< endl;
	cout << " 'double' incleye todos los realeas con numeros decimal"<< endl;
	
	cout << "\n Cadena de Caracteres "<< endl;
	cout << " 'char' un caracter"<< endl;
	cout << " 'strign' cadena de caracteres"<< endl;
	
	cout << "\n booleanos"<< endl;
	cout << " 'bool' solo pueden contener true o false "<< endl;
	
	int numero_entero = 15;
	
	cout << "\n Numero entero"<< numero_entero <<endl;
	
	numero_entero = 18;
	cout << " Entero modificado "<< numero_entero << endl;

    return 0;
}
