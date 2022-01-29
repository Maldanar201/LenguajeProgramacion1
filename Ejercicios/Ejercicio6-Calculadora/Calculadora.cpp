#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada
	int a = 0,b = 0;
	int Suma = 0, Resta = 0, Multiplicacion = 0, Division = 0;
	
	cout << " CALCULADORA "<< endl;
	// Ingreso de datos
	cout << "\n Ingrse el valor de a:  ";
	cin >> a;
	cout << "\n Ingrse el valor de b:  ";
	cin >> b;
	
	//proceso
	Suma = a + b;
	Resta = a - b;
	Multiplicacion = a * b;
	Division = a / b;
	
	//salida
	cout << "\n La suma de a + b es:  " << Suma << endl;
	cout << " La Resta de a - b es:  " << Resta << endl;
	cout << " La Multiplicacion de a * b es:  " << Multiplicacion << endl;
	cout << " La Division de a / b es:  " << Division << endl;

    return 0;
}
