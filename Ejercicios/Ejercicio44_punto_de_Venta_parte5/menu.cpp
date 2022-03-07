#include <iostream>

using namespace std;
extern void Productos(int opcion);
extern void imprimirFactura();
void menu()
{
	int opcion = 0;
	
	while(true) // ciclo para abrir los procesos del menu
	{
		system("cls");
		cout << "     ************"<<endl;
		cout << "     ****MENU****"<<endl;
		cout << "     ************"<<endl;
		cout <<endl;
		cout <<endl;
		
		cout << " 1 - Bebidas Calientes "<<endl;
		cout << " 2 - Bebidas Frias "<<endl;
		cout << " 3 - Postres "<<endl;
		cout << " 4 - Imprimir Factura "<<endl;
		cout << " 0 - Salir "<<endl;
		cout <<"\n Elija la opcion del menu que desea ver :";
		cin >> opcion;
		
		if(opcion == 0)
		{
			break;
		}
		if(opcion == 4)
		{
			imprimirFactura();
		}
		else
		{
			Productos(opcion);
		}
		
	}	
}
