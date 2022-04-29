#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>
using namespace std;


// seguridad para iniciar el sistema
bool login()
{
	setlocale(LC_CTYPE,"spanish");
	
	string usuario = "";
	string password = "";
	bool acceso = false;
	int intentos = 0;
	
	while(intentos <= 3)
	{
		system("cls");
		
		if(intentos == 3)
		{
			cout << "   NO SE PUDO VALIDAR SU PASSWORD, "<< endl;
			cout << " Por favor pongase en contacto con el,"<<endl;
			cout << "      administrador del systema " << endl;
			
			return false;
		}
		
		cout << " Ingrese su Usuario : ";
		cin >> usuario;
		cout << " Ingrese su clave : ";
		cin >> password;
		
		if(usuario == "admin" && password == "admin")
		{
			system("cls");
			return true;
		}
		
		intentos++;
	}	
}
