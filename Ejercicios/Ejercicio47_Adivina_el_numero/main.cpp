#include <iostream>
#include <stdlib.h> // srand, rand
#include <time.h>

using namespace std;

int main(int argc, char** argv)
{
	int numeroSecreto = 0;
	int miNumero = 0;
	int conteo = 0;
	//inicializa el numero randon
	srand(time(NULL));
	// genera un numero entre 1 y 10
	numeroSecreto = rand()%10 + 1;
	
	do
	{
		cout << (" Adivina el Numero entre 1 y 10 : ");
		cin >> miNumero;
		
		conteo++;
		
		if(numeroSecreto > miNumero)
		{
			cout << " El numero secreto puede ser mayor"<<endl;
			cout << endl;
			cout <<"        "  "    +"<<endl;
			cout <<"        "  "   + +"<<endl;
			cout <<"        "  "  +   +"<<endl;
			cout <<"        "  " +++ +++  "<<endl;
			cout <<"        "  "   + +"<<endl;
			cout <<"        "  "   + +"<<endl;
			cout <<"        "  "   +++"<<endl;
			cout << endl;
		}
		else
		{
			if(numeroSecreto < miNumero)
			{
				cout << " El numero secreto puede ser menor"<<endl;
				cout << endl;
			cout <<"        "  "   ---"<<endl;
			cout <<"        "  "   - -"<<endl;
			cout <<"        "  "   - -"<<endl;
			cout <<"        "  " --- ---  "<<endl;
			cout <<"        "  "  -   -"<<endl;
			cout <<"        "  "   - -"<<endl;
			cout <<"        "  "    -"<<endl;
			cout << endl;
			}
			
		}
		
			
	}while(numeroSecreto != miNumero);
	
	cout << endl;
	cout << endl;
	cout << "    $$$ ADIVINASTE $$$"<<endl;
	cout << "    =================="<<endl;
	cout << endl;
	system("pause");
	return 0;
}
