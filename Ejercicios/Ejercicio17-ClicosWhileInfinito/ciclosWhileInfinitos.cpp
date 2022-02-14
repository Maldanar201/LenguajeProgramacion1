#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	// declaracion de variables
	int ciclos = 0;
	
	// desarrollo
	while(ciclos < 10)
	{
		cout<<" *     *     * *     *     *   "<<endl;
		cout<<"   *   *   *     *   *   *     "<<endl;
		cout<<"     * * *         * * *       "<<endl;
		cout<<" ************* *************   "<<endl;
		cout<<"     * * *         * * *       "<<endl;
		cout<<"   *   *   *     *   *   *     "<<endl;
		cout<<" *     *     * *     *     *   "<<endl;
		
		ciclos++;
		
	}
	
	return 0;
}
