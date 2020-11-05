#include <iostream>

//Ignacio Aragon 

using namespace std;

int main (){
	
	int a;
	int v;
	int p;

	cout << "Dime un numero"<< endl;
	cin >> a;

	p=1;

	if (a<=10){
		
		for (int i=1; i<=10; i++){
				v=p*a;
				cout << a << " x " << p << " = " << v << endl;
				p++;
			}

	}else{
			
				cout << "ERROR"<< endl;
			}
	
	return 0;
}
