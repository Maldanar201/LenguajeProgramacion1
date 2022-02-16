#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	// declaracion de variables
	int inicio = 0; 
	
	// desarrollo ciclos for
	
	
	for(inicio = 0; inicio <10; inicio++)
	{
		cout <<inicio;
	}
	cout << endl;
		
	for(inicio = 9; inicio >= 0; inicio--)
	{	
		cout <<inicio;
	}
	cout << endl;	
	
	for( inicio = 0; inicio <= 1000; inicio++)
	{				
		cout << inicio << " ";
		
		if (inicio == 115)
		{			
			break;
		}
		
	}
	
	cout << endl;
	
	for(inicio = 0; inicio <10; inicio++)
	{
		if( inicio == 5 or inicio == 7)
		{
			continue;
		}
		cout <<inicio;
	}
	cout << endl;
		
	
	return 0;
}
