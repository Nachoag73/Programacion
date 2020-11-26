#include <iostream>

using namespace std;

unsigned long sumaDigitos(unsigned long n){

	unsigned long s, t;
	p=0;
	
	do{
		r=n%10;
		n=n/10;
		p=p+r;

	}while(n!=0){
		return p;
	
		}

}
