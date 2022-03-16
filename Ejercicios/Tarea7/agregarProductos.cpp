#include <iostream>
#include "menu.h"
#include "productos.h"
#include "agregarProductos.h"
#include "Factura.h"

using namespace std;

void agregarProducto(string descripcion, int cantidad, double precio)
{

	double subtotal = 0;
	string listaProductos;

	listaProductos = listaProductos + descripcion + '\n';
	subtotal = subtotal + (cantidad * precio);
}

