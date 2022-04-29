#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>

using namespace std;
extern void menu();
void listaProyecto();
string nombreProyecto;

void crearProyecto()
{
	ofstream archivo;
		
	cout << " Bienvenido a Crear un fichero para Su Proyectos "<<endl;
	cout << "================================================="<<endl;
	cout << endl;
	cout << "";
	cout << " Digite el Nombre Del Proyecto : ";
	cin.ignore();
	getline(cin,nombreProyecto);
	listaProyecto();
	
	nombreProyecto = nombreProyecto+".txt";
			
	archivo.open(nombreProyecto.c_str(),ios::out); //crear archivo
	
	if(archivo.fail())
	{
		cout << " No se pudo crear el Archivo "<<endl;
		cout << " Permisos insuficientes ";
	}
	
	archivo << "codigo,nombre_Documento,Fecha_Caducidad,Fecha_iniciarTramite,Estado"<<endl;
	archivo.close(); //cerrar el archivo
			
	system("pause");
	menu();
	
}

void listaProyecto()
{
	ofstream archivo;
	int contador = 1;
	
	archivo.open("listaProyectos.txt",ios::app);// abrir archivo
	
	if(archivo.fail())
	{
		archivo.open("listaProyectos.txt",ios::out);// crear archivo
	}
	else
	{
			
			ifstream in("listaProyectos.txt");
			std::string unused;
			while ( std::getline(in, unused) )
		   	{
		   		++contador;
			}
	}
	

	
	archivo << contador << "," << nombreProyecto << endl;
	
	archivo.close();
}
