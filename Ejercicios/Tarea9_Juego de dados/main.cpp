#include <iostream>
#include <stdlib.h> // srand, rand
#include <time.h>

using namespace std;

int main(int argc, char** argv) 
{
	while(true)
	{
		
		cout << "                           $$$$$$$$$$$$$$$$$$$$$$$$$$ "<< endl;
		cout << "                           $$                      $$ "<< endl;	
		cout << "                           $$ # APUESTA DE DADOS # $$ "<< endl;
		cout << "                           $$                      $$ "<< endl;
		cout << "                           $$$$$$$$$$$$$$$$$$$$$$$$$$ "<< endl;
		cout << endl;
		
		int inicio = 0;
		int dado1 = 0, dado2 = 0, suma = 0;
		cout << "                            $$ Ganas con 7 y 11 $$ "<<endl;
		cout << "                          XX Pierdes con 2 , 3 y 12 XX"<<endl;
		cout <<endl;
		cout << "             Preciona cualquier tecla para lanzar, Precione 0 para salir ";
		cin >> inicio;
		
		//inicializa el numero randon
		srand(time(NULL));
		// genera un numero entre 1 y 10
		dado1 = rand()%6 + 1;
		dado2 = rand()%6 + 1;
		
		suma = dado1 + dado2;
		
		cout << "\n                              Dado 1 :"<<dado1<<endl;
		cout << "                              Dado 2 :"<<dado2<<endl;
		cout << "                              Suma del Lanzamiento : "<< suma << endl;
		
		if(suma == 7  or suma == 11 )
		{
			cout << endl;
			cout << "                                $$$$$$$$$$$$$$$$ "<< endl;
			cout << "                                $$$  GANASTE $$$ "<< endl;
			cout << "                                $$$  GANASTE $$$ "<< endl;
			cout << "                                $$$  GANASTE $$$ "<< endl;
			cout << "                                $$$$$$$$$$$$$$$$ "<< endl;
			cout << endl;
		}
		else
		{
			if(suma == 2  or suma == 12 or suma == 3)
			{
				cout << "                              ================ "<< endl;
				cout << "                              ===    LA    === "<< endl;
				cout << "                              ===   CASA   === "<< endl;
				cout << "                              ===   GANA   === "<< endl;
				cout << "                              ================ "<< endl;	
				cout << endl;
			}
			else
			{
				cout << "\n                            VUELVE A LANZAR " <<endl;
				cout << endl;
			}
		}
		
		if(inicio == 0)
		break;
		
		system("pause");
		system("cls");
				
	}
	return 0;
}
