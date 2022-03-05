#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

// Definir Funciones 

int suma()
{
	return 5 + 7; // la funcion retornara la suma de 5 + 7
}

string NombreCompleto()
{
	string nombre =  "Manuel";
	string Apellido = "Aldana";
	
	return nombre+" "+Apellido;// toda funcion debe contener un return
}

int main(int argc, char** argv) {
	
	int resultado = suma();
	string NombreApellido = NombreCompleto();
	
	cout << " Resultado :"<< suma()<<endl;
	cout << NombreApellido<<endl;
	
	return 0;
}
