#include <iostream>
using namespace std;
/*Implementar un procedimiento que recibe como parámetro un número y devuelve los números formados por los dígitos en posiciones pares y los dígitos en posiciones impares. El orden de los dígitos debe conservarse. Por ejemplo, para el número 1234 el procedimiento devolvería los número 13 y 24.  Considerar que el dígito más a la derecha corresponde a la posición 1. Utilizar, si es necesario, otros subalgoritmos auxiliares*/

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

unsigned PosicionPar(unsigned n){
	
	unsigned par=0;
	unsigned cont=1;
	unsigned r;
	
	do{
		r=n%10;
		if(cont%2==0){
			par=par*10+r;
		}
		cont++;
		n=n/10;
	}while(n!=0);
	par=invertir(par);
return par;
}

unsigned PosicionImp(unsigned n){

	unsigned impar=0;
	unsigned cont=1;
	unsigned r;
	
	do{
		r=n%10;
		if(cont%2==0){
		}else{
				impar=impar*10+r;		
			}
		cont++;
		n=n/10;
	}while(n!=0);
	impar=invertir(impar);
return impar;
}

int main(){
	unsigned a;
	unsigned p, i;
	cout<<"Dame un numero"<<endl;
	cin>>a;

	p=PosicionPar(a);
	i=PosicionImp(a);
	cout<<"Numeros en la posicion par: "<<p<< " y numeros en la posicion impar: "<<i<<endl;
	

return 0;
}
