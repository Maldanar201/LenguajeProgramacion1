#include <iostream>

using namespace std;
extern void Productos(int opcion);
void menu()
{
	int opcion = 0;
	
	while(true)
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
		
		cin >> opcion;
		
		if(opcion == 0)
		{
			break;
		}
		
		Productos(opcion);
	}	
}
