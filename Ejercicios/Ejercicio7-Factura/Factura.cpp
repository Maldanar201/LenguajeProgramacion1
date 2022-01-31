#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada
	double subtotal = 0, total = 0, impuesto = 0.15, Monto_impuesto = 0;
	
	cout << "FACTURA" << endl;
	
	cout << "\n Ingrese el subtotal de la facturas:  ";
	cin >> subtotal;
	
	//Proceso
	total = subtotal + (subtotal * impuesto);
	Monto_impuesto = subtotal * impuesto;
	
	//salida
	cout <<"\n El subtotal es    :  "<< subtotal << endl; 
	cout <<" Valor Impuesto es :  "<< Monto_impuesto << endl;
	cout <<" Total a pagar es  :  "<< total << endl;
	
    return 0;
}
