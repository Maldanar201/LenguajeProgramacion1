#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int suma(int A, int B)
{
	return A+B;
}
int main(int argc, char** argv) 
{
	system("cls");
	
	cout<<suma(5,7);
	cout << endl;
	cout<<suma(5,25);
	cout << endl;
	cout<<suma(53,7);
	cout << endl;
	cout<<suma(593,7);
	cout << endl;
		

	
	return 0;
}
