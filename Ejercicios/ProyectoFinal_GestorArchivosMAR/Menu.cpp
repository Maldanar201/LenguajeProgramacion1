#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>

using namespace std;
extern void crearProyecto();
extern void crearMeta();
extern void listaProyecto();
extern void consultarListaProyecto();
extern void consultarListaDocumentos();
 
// presentacion de opciones para realizar en el sistema
void menu()
{
	setlocale(LC_CTYPE,"spanish");
	int opcion = 0;
	
	do
	{	
			
		system("cls");
		
		cout << "          =========================== " << endl;
		cout << "          == bienvenido al Sistema == " << endl;
		cout << "          =========================== " << endl;
		
		cout << endl;
		cout <<" ** Elija la opcion del menu para comenzar a trabajar **";
		cout << endl;
		cout << "     1 - Crear un Proyecto " << endl;
		cout << "     2 - Consultar lista de Proyectos" << endl;
		cout << "     3 - Crear registro de Documentos en proyectos " << endl;
		cout << "     4 - Consultar documentos de Proyectos " << endl;
		cout << "     0 - Salir del Sistema " << endl;
		cout << "\n Ingrese su opcion :";
		cin >> opcion;
		
			
		
		switch(opcion)
		{
			case 0:
			{
				cout << "\n GRACIAS POR USAR EL GESTOR DE ARCHIVOS RAM " << endl;
				break;
			}
			case 1:
			{				 // ingresar para crear entradas de Datos
				crearProyecto();
				break;
			}
			case 2:
			{
							//Consultar loa datos existentes en el archivo Bdatos.txt 
				consultarListaProyecto();
				break;
			}
			case 3:
			{
				crearMeta();
				break;
			}	
			case 4:
			{
				consultarListaDocumentos();
				break;
			}
			default :
			{
				cout << " opcion no valida ";
				cout << " Precione enter y buelva a elegir";
				
				system("pause");
				
				menu();
			}				
		}
	}while(opcion = 0);
}
