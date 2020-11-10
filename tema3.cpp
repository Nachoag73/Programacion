#include <iostream>

using namespace std;

//Numeros primos entre dos valores

bool primo( unsigned n);

int main(){


	unsigned a, b;

	cout<< "a?";
	cin>> a;
	cout <<"b?";
	cin>>b;


	for (unsigned k=a; k<=b; k++){
		if (primo(k)){
			cout <<k<<" ";
		}
	}

return 0;
}

bool primo( unsigned n){
			bool esprimo;
			esprimo=n>=2;
			for (unsigned d=2;d<=n/2; d++){
				if (n%d==0){
					esprimo=false;
				}
			}

return esprimo;
}
