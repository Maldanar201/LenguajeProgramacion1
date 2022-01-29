#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Spanish");
	//datos de entrada
	int a = 0;
	int b = 0;
	int resultado = 0;
	
	cout << " SUMAR DOS VALORES "<< endl;
	
	cout << "\n Ingrse el valor de a:  ";
	cin >> a;
	cout << "\n Ingrse el valor de b:  ";
	cin >> b;
	
	//proceso
	resultado = a + b;
	//salida
	cout << "\n La suma de a + b es:  " << resultado << endl;
	
	return 0;
}
