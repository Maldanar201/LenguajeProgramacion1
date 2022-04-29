#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>
using namespace std;
extern void menu();
string Alerta();
string nombreProyecto2;
string listadocumentos[5];
int dia1, mes1, anyo1;
int dia2, mes2, anyo2;

void guardar() // funcion para enviar datos a archivo BDatos.txt
{
	ofstream archivo;
	
	archivo.open(nombreProyecto2.c_str(),ios::app);//abrir el archivo
	
	if(archivo.fail())
	{
		cout << " EL ARCHIVO NO EXISTE "<< endl;
		cout << " Consulte la lista de proyectos "<<endl;
		
		system("pause");
		menu();
	}
	
	archivo << listadocumentos[0]<<","<<listadocumentos[1]<<","<<listadocumentos[2]<<","<<listadocumentos[3]<<","<<listadocumentos[4]<<","<<Alerta()<<endl;
	
	archivo.close(); //cerrar el archivo
}


void crearMeta() // funcion para crear los datos necesisarios para gestionar con los archivos
{
	setlocale(LC_CTYPE,"spanish");
	
	char nombre[30];	
	char Ubicacion[128];
	string fechaCaducidad[3];
	string fechaAlerta[3];
	char dia3[5]; 
	char mes3[5]; 
	char anyo3[5];
	char dia4[5];
	char mes4[5]; 
	char anyo4[5];
	char codigo[3];
			
	system ("cls");
	
		
	cout << " Ingrese los documento para Proyectos "<<endl;
	cout << "================================================="<<endl;
	cout << endl;
	cout << " Digite el Nombre Del Proyecto : ";
	cin.ignore();
	getline(cin,nombreProyecto2);
	nombreProyecto2 = nombreProyecto2+".txt";

	cout << endl;	
	cout << " Ingrese el nombre del Archivo : ";
	cin.ignore();
	cin.getline(nombre,30,'\n'); //>> nombre;
	cout << " Copie el link de la ubucacion del archivo : ";
	cin.getline(Ubicacion,128,'\n');//cin >> Ubicacion;
	cout << " Ingrese Fecha de Vencimineto  " << endl;
	cout<<"";
	cout <<" Dia : " ; 
	cin.getline(dia3,5,'\n'); 
	cout<<"";
	cout << " Mes : "; 
	cin.getline(mes3,5,'\n'); 
	cout << " Año : "; 
	cin.getline(anyo3,5,'\n');
	cout << " Ingrese Fecha de Para Tramitar nuevo  " << endl;
	cout<<"";
	cout <<" Dia : " ; 
	cin.getline(dia4,5,'\n');
	cout << " Mes : "; 
	cin.getline(mes4,5,'\n');
	cout << " Año : "; 
	cin.getline(anyo4,5,'\n');
	cout << " ingrese el codigo del Archivo : ";
	cin.getline(codigo,3,'\n');

		dia1 = atoi(dia3);
		mes1 = atoi(mes3);
		anyo1 = atoi(anyo3);
		dia2 = atoi(dia4);
		mes2 = atoi(mes4);
		anyo2 = atoi(anyo4);
		
		fechaCaducidad[0] = dia3;
		fechaCaducidad[1] = mes3;
		fechaCaducidad[2] = anyo3;
		
		fechaAlerta[0] = dia4;
		fechaAlerta[1] = mes4;
		fechaAlerta[2] = anyo4;
	
		listadocumentos[0]= codigo;
		listadocumentos[1] = nombre;
		listadocumentos[2] = Ubicacion; 
		listadocumentos[3] = fechaCaducidad[0]+"/"+fechaCaducidad[1]+"/"+fechaCaducidad[2];
		listadocumentos[4] = fechaAlerta[0]+"/"+fechaAlerta[1]+"/"+fechaAlerta[2];

	guardar();
	
	cout << endl;	
	system("pause");
	
	menu();
}

string Alerta()// funcion para gestionar las fechas de vencimiento y renovaciones de documentos
{
	
	int dia,mes,anio;
	string Alerta2;
						
	time_t t;
	t = time(NULL);
	struct tm *fecha;
	fecha = localtime(&t);
	
	dia = fecha->tm_mday;
	mes = fecha->tm_mon+1;
	anio = fecha->tm_year+1900;	
	
	if(dia1 <= dia && mes1 <= mes && anyo1 <= anio)
		{
			Alerta2 = " *** Documento Caducado *** ";
		}
		else
		{
			if(mes2 <= mes && anyo2 <= anio && mes1 >= mes )
			{				
				Alerta2 = " ¡¡¡ Alerta Realice Nuevo Tramite !!! ";
			}
			else
			{
				Alerta2 = " ++ OK ++ ";
			}
		}
		
	return Alerta2;
}
