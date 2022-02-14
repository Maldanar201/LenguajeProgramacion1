#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	// declaracion de variables
	int a = 5, b = 2;
	
	// desarrollo
	while( a > b)
	{
		cout << "ingrese valor de a:" ;
		cin >> a;
	}
	
	cout <<"\n Saliste del ciclo !"<<endl;
	
	return 0;
}
