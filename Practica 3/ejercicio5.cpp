#include <iostream>

//Ignacio Aragon Garcia 

using namespace std;

int main(){

	int k;
	int mayor;

	
	cout<<"Dime los numeros acabados en 0"<<endl;
	cin>> k;

	mayor=k;

	while (k!=0){
		
		if (k>mayor){

			mayor=k;	
		}

		cin>>k;
	}//while (k!=0)



	return 0;

}
