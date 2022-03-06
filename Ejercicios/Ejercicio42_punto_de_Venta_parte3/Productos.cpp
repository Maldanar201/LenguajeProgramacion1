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
			
			cin >> opcionProductos;
			
			switch(opcionProductos)
			{
				
				case 1:
				{
					agregarProducto("Capuccino", 1, 40);
					break;
				}
				case 2:
				{
					agregarProducto("Expresso", 1, 30);
					break;
				}
				default:
				{
					cout <<" Opcion no Valida ";
				}
			}
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
