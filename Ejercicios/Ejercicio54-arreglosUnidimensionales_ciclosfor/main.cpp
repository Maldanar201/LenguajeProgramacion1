#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int numero[5]; // declaracion de arreglo unidimensional 
	
	for(int i = 0; i < 5; i++)
	{
		numero[i]= i;
		cout << numero[i] << endl;
	}
	
	for( int i = 0; i <= 50; i = i+2)
	{
		numero[i]= i;
		cout << "* "<<numero[i] <<" *"<< endl;
	}
	return 0;
}
