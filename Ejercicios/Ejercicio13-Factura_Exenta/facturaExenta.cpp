#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
		//datos de entrada
	double subtotal = 0, total = 0, impuesto = 0.15, Monto_impuesto = 0, Calculo_Descuento = 0;
	int descuento = 0;
	char exenta;
	
	cout << "FACTURA" << endl;
	
	cout << "\n Ingrese el subtotal de la facturas:  ";
	cin >> subtotal;
	cout << "\n Ingrese el Monto de descuento (0, 10, 15, 20)";
	cin >> descuento;
	cout << "\n La Factura esta Exenta, Ingrese 'S' para si, una 'N' para no :";
	cin >> exenta;
	
    //Proceso
	if( exenta == 's' or exenta == 'S')
	{
		impuesto = 0;
		Calculo_Descuento = (subtotal * descuento) / 100;
		Monto_impuesto = (subtotal - descuento) * impuesto;
		total = subtotal - Calculo_Descuento + Monto_impuesto;
	
	
		//salida
		cout <<"\n La factura esta excenta " << endl;
		cout <<" El subtotal es        :  "<< subtotal << endl; 
		cout <<" Monto de descuento es :  "<<Calculo_Descuento<< endl;
		cout <<" Valor Impuesto es     :  "<< Monto_impuesto << endl;
		cout <<" Total a pagar es      :  "<< total << endl;	
		
	}
	else
	{
	
		Calculo_Descuento = (subtotal * descuento) / 100;
		Monto_impuesto = (subtotal - descuento) * impuesto;
		total = subtotal - Calculo_Descuento + Monto_impuesto;
	
	
		//salida
		cout <<"\n El subtotal es        :  "<< subtotal << endl; 
		cout <<" Monto de descuento es :  "<<Calculo_Descuento<< endl;
		cout <<" Valor Impuesto es     :  "<< Monto_impuesto << endl;
		cout <<" Total a pagar es      :  "<< total << endl;
	}
	
	return 0;
}