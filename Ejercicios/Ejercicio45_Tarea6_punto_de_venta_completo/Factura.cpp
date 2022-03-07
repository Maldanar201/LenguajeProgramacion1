#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double subtotal = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n';
	subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    
	double total = 0, impuesto = 0.15, Monto_impuesto = 0, Calculo_Descuento = 0;
	int descuento = 0;
	cout << endl;
	cout << "      ##   FACTURA  ##        " << endl;
	cout << "     ==================          " << endl;
			
	//Proceso
	
	Calculo_Descuento = (subtotal * descuento) / 100;
	Monto_impuesto = (subtotal - descuento) * 0.15;
	total = subtotal - Calculo_Descuento + Monto_impuesto;
	
	
	//salida
	cout << "\n    ** Productos ** " << endl;
	cout << listaProductos << endl;
	
	cout <<"\n El subtotal es        :  "<< fixed << setprecision(2)<< subtotal << endl; 
	cout <<" Monto de descuento es :  "<< fixed << setprecision(2)<<Calculo_Descuento<< endl;
	cout <<" Valor Impuesto es     :  "<< fixed << setprecision(2)<< Monto_impuesto << endl;
	cout <<" Total a pagar es      :  "<< fixed << setprecision(2)<< total << endl;
	cout<<endl;
	system("Pause");
}
