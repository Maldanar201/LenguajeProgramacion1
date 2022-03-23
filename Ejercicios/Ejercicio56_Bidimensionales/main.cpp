#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	cout << " APRENDIENDO ARREGLOS BIDIMENCIONALES "<<endl;
	cout << endl;
	
	string nombres[3][2]; // arreglo de una matriz de 3x2 3 filas 2 columnas nombre y apellido
	
	nombres[0][0] = "Juan";
	nombres[0][1] = "Perez";
	
	nombres[1][0] = "Maria";
	nombres[1][1] = "Martinez";
	
	nombres[2][0] = "Pedro";
	nombres[2][1] = "Jimenez";
	
/*	for( int i = 0; i < 3; i++)
	{
		cout << nombres[i][0]<<" "<<nombres[i][1]<<endl;
	}
*/	
	
	for( int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << nombres[i][j]<<" ";// vese que el espacio entre string se agrego al final 
		}
		
		cout<<endl;
	}
	return 0;
}
