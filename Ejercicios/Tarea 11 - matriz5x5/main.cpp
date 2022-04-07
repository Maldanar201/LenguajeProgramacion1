#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	int suma = 0; // para sumar los valores
	
	int a[5][5]; // declaracion de la matriz
	{
		srand(time(0)); //inicializando los valores random
		
		// ciclo para  asignar valor a cada vector
		for(int i = 0; i < 5; i ++)
		{
			for(int j = 0; j < 5; j++ )
			{
				a[i][j] = rand()% 10;
				suma = suma + a[i][j];
			}
		}
	}
	
	// imprimir en pantalla
	
	cout << " Valores de la Matriz 5 x 5 : "<<endl;
	for(int i = 0;i<5;i++)
	{
		for(int j = 0; j < 5; j++ )
		{
			cout <<"   " <<a[i][j];
		}
		cout<<"\n";
	}

	cout <<endl;
	cout <<" Suma de los valores de la matriz :"<<suma<<endl; // imprimir en patalla la suma de los vectores
	cout<<endl;
	
	system("pause");
	
	return 0;
}
