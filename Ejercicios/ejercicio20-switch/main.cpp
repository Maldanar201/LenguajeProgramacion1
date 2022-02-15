#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	//declaracion de variables
	int opcion = 0;
	
	
	//desarrollo
	cout << " Ingrese una Opcion : ";
	cin >> opcion;
	
	switch ( opcion)
	{
	
	case 1:
		{
			cout << " Escogiste 1 "<< endl;
			cout << " Segunda Linea use {}"<<endl;
			break;
		}
	case 2:
		cout << " Escogiste 2 "<< endl;
		break;
	case 3:
		cout << " Escogiste 3 "<< endl;
		break;
	default:
		cout << " ingrese una opcion entre 1 y 3 "<< endl;
		break;
	}
	return 0;
}
