#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>

using namespace std;
extern void menu();

void consultarListaDocumentos()// funcion para consultar los datos escritos en el archivo .txt
{
	system("cls");
	cout << " Listado De Proyectos " << endl;
	cout << "=======================" << endl;

	ifstream archivo;
	string texto, texto2;
	string nombreProyecto3;
	
	archivo.open("listaProyectos.txt",ios::in);//abrir el archivo en modo lectura
	
	if(archivo.fail())
	{
		cout << "NO SE PUDO LEER EL ARCHIVO ";
		exit(1);
	}

	while(!archivo.eof()) // leer todo el archivo txt
	{
		getline(archivo,texto);		
		cout << texto << endl;
	}
	
	//system("pause");
	archivo.close(); //cerrar el archivo
	
	cout <<endl;
	cout << " Ingrese el nombre del Proyecto para ver los documentos : ";
	cin.ignore();
	getline(cin,nombreProyecto3);
	nombreProyecto3 = nombreProyecto3+".txt";
	
	archivo.open(nombreProyecto3.c_str(),ios::in);
	
	if(archivo.fail())
	{
		cout << "Nombre incorrecto vuelva a digitarlo ";
		consultarListaDocumentos();
	}

	while(!archivo.eof()) // leer todo el archivo txt
	{
		getline(archivo,texto2);		
		cout << texto2 << endl;
	}
	
	system("pause");
	archivo.close();
	menu();
}

