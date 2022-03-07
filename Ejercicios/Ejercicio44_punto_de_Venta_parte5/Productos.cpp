#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void Productos(int opcion)
{
		
	system("cls");
	int opcionProductos = 0;
	
	switch(opcion)
	{
	case 1:
		{
			cout <<" ### BEBIDAS CALIENTES ### "<< endl;
			cout <<"==========================="<< endl;
			cout << endl;
			cout << " 1 - Capuccino "<<endl;
			cout << " 2 - expresso "<<endl;
			cout << "\n Elija un producto del menu :";
			cin >> opcionProductos;
			
			switch(opcionProductos)
			{
				
				case 1:
				{
					agregarProducto(" 1 -- Capuccino -- L. 40.00", 1, 34.79);
					break;
				}
				case 2:
				{
					agregarProducto(" 1 -- Expresso -- L. 30.00", 1, 26.089);
					break;
				}
				default:
				{
					cout <<" Opcion no Valida ";
					return;
					break;
				}
				cout <<endl;
				cout << "\n Producto agregado "<< endl;
				system("pause");
			}
			cout <<endl;
			cout << "\n Producto agregado "<< endl;
			cout <<endl;
			system("pause");
			
		break;
			
		}
	case 2:
		{
			cout <<" ### BEBIDAS FRIAS ### "<< endl;
			cout <<"======================="<< endl;
				
			system("pause");
		}
	case 3:
		{
			cout <<" ### REPOSTERIA ### "<< endl;
			cout <<"===================="<< endl;
				
			system("pause");
		}
	default:
		break;
	}
}
