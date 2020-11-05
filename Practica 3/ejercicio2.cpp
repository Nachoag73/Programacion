#include <iostream>

//Ignacio Aragon Garcia PC318

using namespace std;

int main(){

	unsigned n;
	unsigned d; //Divisores
	unsigned mayor;

	cout <<"Dime los numeros acabados en 0"<<endl;
	cin >> n;

	mayor= n;
	while (n !=0){
		
		if (n>mayor){
			mayor=n;
		}

		d=0;

		for (unsigned i=1; i<=n; i++){

				if((n%i==0) and (mayor%i==0)){
						d++;
					}
		
			}
		cout<< d << " ";
		cin >> n;

	}

	return 0;

}
