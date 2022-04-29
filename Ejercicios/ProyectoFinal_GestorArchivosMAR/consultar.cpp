#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>

using namespace std;
extern void menu();

void consultarListaProyecto()// funcion para consultar los datos escritos en el archivo .txt
{
	system("cls");
	cout << " Listado De Proyectos " << endl;
	cout << "=======================" << endl;

	ifstream archivo;
	string texto;
	
	archivo.open("listaProyectos.txt",ios::in);//abrir el archivo en modo lectura
	
	if(archivo.fail())
	{
		cout << "NO SE PUDO LEER EL ARCHIVO ";
		exit(1);
	}
	//cout<<" Codigo,NombreProyecto,NombreArchivo,Ubicacion,FechaVencimiento,FechaAlerta,Estado"<<endl;
	while(!archivo.eof()) // leer todo el archivo txt
	{
		getline(archivo,texto);		
		cout << texto << endl;
	}
	
	system("pause");
	archivo.close(); //cerrar el archivo
	
	menu();
}
