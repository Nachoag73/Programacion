#include <iostream>

//Ignacio Aragon Garcia 

using namespace std;

int main(){

	int n;
	int r;
	int c;

	cout<< "Dime los nueros acabados en 0"<<endl;
	cin>>n;

   c=0;
	while(n!=0){

		r=n%8;
		c=c+r;

		cin>>n;
	}
		
		cout <<c<<endl;

	return 0;

}
