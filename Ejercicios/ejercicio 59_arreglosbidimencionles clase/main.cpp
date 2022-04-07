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
	
	// imprimir en pantalla
/*	cout << " Valores de la Matriz 5 x 5 : "<<endl;
	cout <<"      "<< a[0][0]<<", " << a[0][1]<<", " << a[0][2]<<", " << a[0][3]<<", " << a[0][4]<<endl;
	cout <<"      "<< a[1][0]<<", " << a[1][1]<<", " << a[1][2]<<", " << a[1][3]<<", " << a[1][4]<<endl;
	cout <<"      "<< a[2][0]<<", " << a[2][1]<<", " << a[2][2]<<", " << a[2][3]<<", " << a[2][4]<<endl;
	cout <<"      "<< a[3][0]<<", " << a[3][1]<<", " << a[3][2]<<", " << a[3][3]<<", " << a[3][4]<<endl;
	cout <<"      "<< a[4][0]<<", " << a[4][1]<<", " << a[4][2]<<", " << a[4][3]<<", " << a[4][4]<<endl;*/
	
	cout <<endl;
	cout <<" Suma de los valores de la matriz :"<<suma<<endl; // imprimir en patalla la suma de los vectores
	cout<<endl;
	
	system("pause");
	
	return 0;
}
