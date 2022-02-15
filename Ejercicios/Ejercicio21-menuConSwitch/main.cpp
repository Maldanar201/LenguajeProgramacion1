#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//declaracion de variables
	
	int opcion = 0;
	
	//desarrollo
	
	cout << "   ****"<<endl;
	cout << "   MENU"<<endl;
	cout << "   ****"<<endl;
	
	cout << "\n 1 - Cafe y Granitas "<<endl;
	cout << " 2 - Reposteria "<<endl;
	cout << " 0 - Salir "<<endl;
	
	cout << "\n Elija una opcion :";
	cin >> opcion;
	
	
	
	switch(opcion)
	{
		case  0:
			{
				cout << " Saliste del sistema " << endl;
				system("pause");
				break;
			}
		
		case 1:
			{
				system("cls");
				cout << " Estas en el menu de cafe y granitas "<< endl;
				system("pause");
				break ;
			}
		case 2:
			{
				system("cls");
				cout << " Estas en el menu de Reposteria "<< endl;
				system("pause");
				break ;
			}
		default:
			{
				cout << " Ingrese una opcion valida ( 0, 1, o 2) "<< endl;
				system("pause");
				break ;
			}
	
	
	}
	
	return 0;
}
