#include <iostream>

using namespace std;

//NUMERO DE DIGITOS
unsigned numDig(unsigned k){
	unsigned D;
	D=0;
	do{
		k=k/10;
		D++;
	}while(D>=1);

return D;
}
//POTENCIA
double pot(double b, unsigned e){
	unsigned r;
	r=1;

	for(unsigned c=1;c<e;c++){
		r=r*b;
	}

return r;
}

//APARTADO 1
double aprox_inicial (double k){
	double x0;
	unsigned D, z, p;
	
	D=numDig(k);
	if(D%2==0){
		z=(D-1)/2;
		p=pot(10,z);
		x0=2*p;
	}else{
			z=(D-2)/2;
			p=pot(10,z);
			x0=6*p;
		}
	cout<<"Numero de Digitos: "<<D<<endl;
	cout<<"z: "<<z<<endl;
	cout<<"Potencia 10^"<<z<<": "<<p<<endl;
	


return x0;
}

//APARTADO 2
double raiz_cuadrada(double k){
	double xn, xn_1;
	unsigned cont=0;
	xn=aprox_inicial(k);
	cout<<"x"<<cont<<": "<<xn;

	do{
		xn_1=xn;
		xn=(xn_1+(k/xn_1))/2;
		cont++;
		cout<<"x"<<cont<<": "<<xn<<endl;;
	}while(abs(xn-xn_1)>0.00001);
	cout<<"interacciones: "<<cont<<endl;


return xn;
}

int main(){
	double k;
	double x0,xn;
	cout<<"Introduzca número: ";
	cin>>k;

	x0=aprox_inicial(k);
	xn=raiz_cuadrada(k);
	cout<<"Valor inicial x0: "<<x0<<endl;
	cout<<"Proceso Iterativo"<<endl;
	cout<< "Resultado: "<<xn<<endl;
return 0;
}
