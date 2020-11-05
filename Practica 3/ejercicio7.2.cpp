#include <iostream>

//Realizar un programa que lea un único número por teclado en una variable de tipo unsigned y muestre por pantalla cuantos dígitos pares tiene. Por ejemplo: 34461 tiene 4 dígitos pares; 55914 tiene 1 dígito par. NOTA: El dígito más a la derecha de un número puede obtenerse calculando el resto de la división por 10 y el número sin el dígito más a la derecha puede obtenerse dividiendo el número por 10. Ejemplo: 123 % 10 = 3; 123 / 10 = 12.

using namespace std;

int main(){


	unsigned n;
	unsigned p;
	unsigned cont;


	cout<< "Dime el numero"<<endl;
	cin>>n;

	p=0;
	cont=0;
	while(n!=0){

		p=n%10;
		if(p%2==0){
			cont++;

		}
		n=n/10;


	}

	cout<<"Tiene "<<cont<<" digitos pares"<<endl;








return 0;

}
