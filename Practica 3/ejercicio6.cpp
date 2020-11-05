#include <iostream>

//Ignacio Aragon Garcia 

using namespace std;

int main(){

	char k;
	int cont;
	int t;
	

	
	cout<<"Dime los numeros acabados en . "<<endl;
	cin>> k;



	while (k!='.'){
		t=0;
		cont=0;
		while(k!=','){
			
			cont++;
			cin>>k;

		}
		t=t+cont;
		cout << t << " ";
		cin>>k;
	}//while (k!=0)



	return 0;

}
