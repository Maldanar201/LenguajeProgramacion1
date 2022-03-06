#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

string nombreCompleto(string Nombre, string Nombre2, string Apellido, string Apellido2)
{
	if(Nombre2 == " ")
	{
		return Nombre +" "+Apellido +" "+ Apellido2;	
		
	}
	if(Apellido2 == " ")
	{
		return Nombre + " "+Nombre2 +" "+Apellido;
		
	}
	if(Nombre2 == " " && Apellido2 == " ")
	{
		return Nombre +" "+ Apellido;
		
	}
	if(Nombre == " " && Nombre2 == " ")
	{
		throw " Necesita al menos un nombre y un Apellido";
	}
	return Nombre + " "+Nombre2 +" "+Apellido +" "+ Apellido2;
}

int main(int argc, char** argv) 
{
	
	string Nom1 = "", Nom2 ="", Ape1 = "", Ape2 = "";
	
	
	cout << " DATOS PERSONALES "<<endl;
	cout <<"==================="<<endl;
	
	cout << " Ingrese su Primer Nombre :";
	cin >> Nom1;
	cout << " Ingrese su Segundo Nombre :";
	cin >> Nom2;
	cout << " Ingrese su Primer Apellido :";
	cin >> Ape1;
	cout << " Ingrese su Segundo Apellido :";
	cin >> Ape2;
	
	try // intenta Hacer
	{
		cout<<endl;
		cout<< "Nombre Completo :"<<nombreCompleto(Nom1,Nom2,Ape1,Ape2);
	}
	catch(const char* error) // cactura error y reproduce mensaje
	{
		cout <<error;
	}

	return 0;
}
