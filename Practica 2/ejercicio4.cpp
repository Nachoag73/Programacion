#include <iostream>

//Ignacio Aragon PC1011

using namespace std;

int main (){
	
	int a;
	int b;
	int d1;
	int d2;
	int m;

	cout <<"Dame el primer numero"<<endl;
	cin>>a;
	cout <<"Dame el segundo numero"<<endl;
	cin>>b;
	cout <<"Dame el primer divisor"<<endl;
	cin>>d1;
	cout <<"Dame el segundo divisor"<<endl;
	cin>>d2;
	m=0;	

	for (int i=a; i<=b; i++){
		if ((i%d1==0) and (i%d2==0)){
			m=m+i;
		}
	}
	cout <<"Resultado= " << m <<endl;
	return 0;
}
