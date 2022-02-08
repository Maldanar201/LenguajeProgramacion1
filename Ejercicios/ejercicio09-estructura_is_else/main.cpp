#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int edad1 = 18, edad2 = 10;


    if ( edad1 > 18) // si se cumple el argumento
    {
        cout <<" Es mayor de edad "<<endl;
    }
    else // de lo contrario
    {
    	cout <<" Es menor de edad ";
	}     
    
    if (edad1 < edad2 )
    {
        cout << "\n Edad 1 es menor que edad 2";
    }
    else
    {
        cout << "\n Edad 1 es manor que edad 2";
    }
    
    while (edad1 > edad2) // mientras se mantenga la condicion
    {
        edad2++;
    
        cout << edad1 <<" es mayor que "<< edad2 << endl;
    }
    
    
    return 0;
}
