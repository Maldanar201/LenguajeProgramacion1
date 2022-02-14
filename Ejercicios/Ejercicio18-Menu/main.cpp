#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	//declaracion de variables
	int opcion = 0;
	
	while (true)
	{
		cout <<"    **** "<<endl;
		cout <<"    MENU "<<endl;
		cout <<"    **** "<<endl;
		
		cout <<"\n 1 - Cafe y Granitas "<<endl;
		cout <<" 2 - Reposteria "<<endl;
		cout <<" 0 - Salir "<<endl;
		
		cout <<" Ingrese una opcion del menu ";
		cin >> opcion;
		
		if( opcion == 1)
		{
			system("cls");
			cout << " Estas en el menu de cafe y granitas" << endl;
			system("pause");
		}
		else
		{
			if( opcion == 2)
			{
				system("cls");
				cout << " Estas en el menu de Reposteria" << endl;
				system("pause");
			}
			else
				break;
		}
	}
	
	return 0;
}
