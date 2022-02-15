#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	//Declaracion de variables
	int  a = 2, b = 10;
	
	//Desarrollo
	
	while( a > b)
	{
		cout << "(while) a > b " << endl;
		break;
	}
	
	
	do
	{
		cout << " ( Do While ) a > b";
		break;
	}while(a > b);
	
	return 0;
}
