#include <iostream>
#include <cmath>

using namespace std;

unsigned long sumaDigitos(unsigned long n);

unsigned long sumaAUnDig(unsigned long n);

unsigned long multDigitos(unsigned long n, unsigned long m);

int main ()
{
	unsigned long n, m;
	cout << "Introduce un digito: ";
	cin >> n;
	cout << "Introduce un valor a multiplicar por cada uno de los digitos del primer número: ";
	cin >> m;
	cout << "El resultado es: " << multDigitos(n, m) <<endl;

	return 0;
}



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


unsigned long sumaAUnDig(unsigned long n){

	do{
	n=sumaDigitos(n);
	
	}while(n>=0){
		return n;
		}
}


unsigned long multDigitos(unsigned long n,unsigned long  m)
{
	unsigned long num,v,res,i;
	i = 0;
	res=0;
	do
	{
		num=n%10;
		n=n/10;
		v=num*m;
		while(v>10)
			v=sumaAUnDig(v);
		res+=v*pow(10,i);
		i++;
	}while(n>0);
	return res;
}
