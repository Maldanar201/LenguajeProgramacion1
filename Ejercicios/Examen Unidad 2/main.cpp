/* Examen Unidad 2 Lenguaje de Programacion I
Elaborado: Manuel Aldana Rivas
Propůsito: Evaluacion de aprendizaje Aprendizaje 
Fecha: 3 Abril de 2022
Hora: 19:00
*/

#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include"Juego.h"

using namespace std;

#define ARRIBA 72
#define IZQUIERDA 75
#define ABAJO 80
#define DERECHA 77
#define ESC 27



int main()
{
	
	
	char tecla;
	int puntos=0;
	int xPos=30, yPos=20;
	
	inicializarArreglo();
	dificultad();
	gotoxy(50,2);
	cout << puntos;
	pintar();
	gotoxy(xPos, yPos);cout<<(char)4;
	
	while(tecla != ESC && gameover() )
	{
		proceso(tecla, puntos);
	}
	
	if ( !gameover())
	{
		MessageBox(NULL,"Has perdido","Perdedor", MB_OK);
		system("cls");
	}
	
	system("pause>NULL");
	return 0;
}
