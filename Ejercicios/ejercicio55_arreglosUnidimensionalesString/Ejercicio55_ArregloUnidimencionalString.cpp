#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "APRENDIENDO ARREGLOS UNIDIMENSIONALES" << endl;
	cout << endl;
   
	string nombres[] = {"Juan", "Jose","Sara","Aida", "Emely"};

    for (int i = 0; i < 5; i++)
    {
        cout << nombres[i]<< endl;
    }
    
    return 0;
}

