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
			cout << " 3 - Chocolate Caliente "<<endl;
			cout << "\n Elija un producto del menu :";
			cin >> opcionProductos;
			
			switch(opcionProductos)
			{
				
				case 1:
				{
					agregarProducto(" 1 -- Capuccino -------------------- L. 40.00", 1, 34.7826);
					break;
				}
				case 2:
				{
					agregarProducto(" 1 -- Expresso --------------------- L. 30.00", 1, 26.0869);
					break;
				}
				case 3:
				{
					agregarProducto(" 1 -- Chocolate Caliente ----------- L. 45.00", 1, 39.1304);
					break;
				}
				default:
				{
					cout <<" Opcion no Valida ";
					return;
					break;
				}			
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
			cout << endl;
			cout << " 1 - Granita  de Cafe "<<endl;
			cout << " 2 - Granita Frutal "<<endl;
			cout << " 3 - smoothie de Frutas "<<endl;
			cout << "\n Elija un producto del menu :";
			cin >> opcionProductos;
			
			switch(opcionProductos)
			{
				
				case 1:
				{
					agregarProducto(" 1 -- Granita de Cafe -------------- L. 50.00", 1, 43.4782);
					break;
				}
				case 2:
				{
					agregarProducto(" 1 -- Granita Frutal --------------- L. 55.00", 1, 47.8260);
					break;
				}
				case 3:
				{
					agregarProducto(" 1 -- Smoothie de frutas ----------- L. 60.00", 1, 52.1739);
					break;
				}
				default:
				{
					cout <<" Opcion no Valida ";
					return;
					break;
				}			
			}
			cout <<endl;
			cout << "\n Producto agregado "<< endl;
			cout <<endl;
			system("pause");
			
		break;
		}
	case 3:
		{
			cout <<" ### REPOSTERIA ### "<< endl;
			cout <<"===================="<< endl;
				cout << endl;
			cout << " 1 - Rollo de Canela "<<endl;
			cout << " 2 - Hojaldre de crema de frutas "<<endl;
			cout << " 3 - bagel con queso crema "<<endl;
			cout << "\n Elija un producto del menu :";
			cin >> opcionProductos;
			
			switch(opcionProductos)
			{
				
				case 1:
				{
					agregarProducto(" 1 -- Rollo de Canela -------------- L. 75.00", 1, 65.2173);
					break;
				}
				case 2:
				{
					agregarProducto(" 1 -- Hojaldre de crema de frutas -- L. 105.00", 1, 91.3043);
					break;
				}
				case 3:
				{
					agregarProducto(" 1 -- bagel con queso crema -------- L. 115.00", 1,100);
					break;
				}
				default:
				{
					cout <<" Opcion no Valida ";
					return;
					break;
				}			
			}
			cout <<endl;
			cout << "\n Producto agregado "<< endl;
			cout <<endl;
			system("pause");
			
		break;
		}
	default:
		break;
	}
}
