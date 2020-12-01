#include <iostream>

using namespace std;

//CODIGO DE INVERTIR UN NUMERO
unsigned invertir (unsigned n){
	unsigned i, t;
	i=0;
	t=0;
	while(n!=0){
		t=n%10;
		i=i*10+t;
		n=n/10;
	}

return i;
}

