#include <iostream>

//Ignacio Aragon PC1011

using namespace std;

int main (){
	
	int a;
	int b;
	int m;

	cout <<"Dame el primer numero"<<endl;
	cin>>a;
	cout <<"Dame el segundo numero"<<endl;
	cin>>b;

	for (int i=a; i<=b; i++){
		
		m=m+i;
	}
	cout <<"Resultado= " << m <<endl;
	return 0;
}
