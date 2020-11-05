#include <iostream>

using namespace std;

int main(){
	
	int a,b,c;

	cout << "Dime un numero"<<endl;
	cin >> a;

	cout << "Dime un numero"<<endl;
	cin >> b;

	cout << "Dime un numero"<<endl;
	cin >> c;

	while (a<=b){

		if (a%c==0){

			cout << a << " "<<endl;

		}

		a++;
	}

	cout <<endl;




	return 0;
}
