/* autor: Manuel ALdana Rivas
clase: Lenguaje de Programacion 1
seccion: 19:00
Descripcion: Listar archivos y crear metadatos para llevar secuencia de fechas de vencimiento de licencias 
*/


#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>

using namespace std;


extern bool login(); // inicio seguridad
extern void menu(); // menu opciones de trabajo


int main(int argc, char** argv) 
{
	setlocale(LC_CTYPE,"spanish");
	
	bool inicio = login(); // iniciar el sistema
	
	if( inicio == true)
	{			
		menu();
	}
		
	return 0;
}
