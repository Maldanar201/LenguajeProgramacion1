#include <iostream>

using namespace std;

void Productos(int opcion)
{
	system("cls");
	switch(opcion)
	{
	case 1:
	{
		cout <<" ### BEBIDAS CALIENTES ### "<< endl;
		cout <<"==========================="<< endl;
		
		system("pause");
	}
	case 2:
	{
		cout <<" ### BEBIDAS FRIAS ### "<< endl;
		cout <<"======================="<< endl;
			
		system("pause");
	}
	case 3:
	{
		cout <<" ### REPOSTERIA ### "<< endl;
		cout <<"===================="<< endl;
			
		system("pause");
	}
	default:
		break;
	}
}
