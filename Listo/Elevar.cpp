#include <iostream>
using namespace std;

//ELEVAR A UN NUMERO
double pot(double b, unsigned e){
	unsigned r;
	r=1;
	for(unsigned c=1, c<e; c++){
		r=r*b;
	}

return r;
}
