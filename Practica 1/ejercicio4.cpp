#include <iostream>

//Ignacio Aragon

using namespace std;

int main (){
	
	char a;

	cout << "Dime un caracter" <<endl;
	cin >> a;

	if (a >= 48 and a<=57){
		
		cout <<a <<" Es un numero "<< endl;

	}else{
		
		if (a>=65 and a<=90){
		
			cout << a <<" Es una letra mayuscula"<<endl;

		}else{
		
			if (a>=97 and a<=122){

				cout << a << " Es una minuscula "<<endl;
				
			}else{

				cout << a << " Es un caracter no alfanumerico "<<endl;

			}
		}
	}


	return 0;
}
