#include <iostream>
using namespace std;

double subtotal = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    //datos de entrada
	double total = 0, impuesto = 0.15, Monto_impuesto = 0, Calculo_Descuento = 0;
	int descuento = 0;
	cout << "FACTURA" << endl;
	
	
	cout << "\n Ingrese el Monto de descuento (0, 10, 15, 20)";
	cin >> descuento;
	
	//Proceso
	listaProductos = listaProductos + descripcion + '\n';
	Calculo_Descuento = (subtotal * descuento) / 100;
	Monto_impuesto = (subtotal - descuento) * 0.15;
	total = subtotal - Calculo_Descuento + Monto_impuesto;
	
	
	//salida
	cout <<"\n El subtotal es        :  "<< subtotal << endl; 
	cout <<" Monto de descuento es :  "<<Calculo_Descuento<< endl;
	cout <<" Valor Impuesto es     :  "<< Monto_impuesto << endl;
	cout <<" Total a pagar es      :  "<< total << endl;
	
	
}
