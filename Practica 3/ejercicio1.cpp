#include <iostream>

//Ignacio Aragon Garcia 

using namespace std;

int main(){

	
	unsigned n;
	bool primo;


	cout << "Introduce el numero" << endl;
	cin >> n;

	primo=n>1;

	for (unsigned d=2; d<2;d++){

		if (n%d==d){

			primo=false;

		}

	}


	if(primo){

		cout << n << " es primo"<<endl;


	}else{

		cout << n << " no es primo"<<endl;

	}


	return 0;

}
