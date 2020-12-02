#include <iostream>
using namespace std;

/*Escribe un algoritmo que lea 2 números enteros positivos y un carácter. En función deeste carácter leído efectuará las siguientes operaciones:
'p' : calcula los números perfectos en el rango dado por los 2 números.'m': calcula el mínimo común múltiplo de ambos números.'d' : calcula el máximo común divisor de los mismos.'+', '*', '-', '/' : realiza la operación correspondiente con los números*/

//cuando c=='+', '*', '-', '/'
int calcular(int a, int b, char c){

	int d;
	if(c=='+'){
		d=a+b;
	}else if(c=='-'){
			d=a-b;
		}else if(c=='*'){
			d=a*b;
				}else{
					if(b==0){
							cout<<"no se pude dividir entre 0"<<endl;
						}else{
							d=a/b;		
							}	
					}
return d;
}

//cuando c==p
int SumaDivNum(int n){
	int s;
	s=0;
	for(int d=1; d<=n/2; d++){ //El bucle for es hasta n/2 porque no se cuenta n
		if(n%d==0){
			s=s+d;
		}
	}
return s;
}

//CALCULAR EL MAYOR DE DOS NUMEROS
int mayor(int a, int b){
	if(a>=b){
		return a;
	}else{
			return b;	
		}
}

//CALCULAR EL MENOS DE DOS NUMEROS
int menor(int a, int b){
	if(a<=b){
		return a;
	}else{
			return b;	
		}
}

//cuando c=d, CALCULAR EL MAXIMO COMUN DIVISOR
int MCD(int a, int b){
	int mcd=0;
	int num1, num2;
	num1=mayor(a, b);
	num2=menor(a, b);

	do{
		mcd=num2;
		num2=num1%num2;
		num1=mcd;
	}while(num2!=0);

return mcd;
}

//cuando c=m, CALCULAR EL MINIMO COMUN MULTIPLO
int MCM(int a, int b){
	int mcm=0;
	int num1, num2;
	num1=mayor(a, b);
	num2=menor(a, b);

	mcm=(num1/MCD(num1,num2))*num2;

return mcm;
}


int main(){
	int a,b;
	char c;
	int h;

	cout<<"Dime los numeros"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Dime el caracter"<<endl;
	cin>>c;
	
	if(c=='p'){
		for(int t=a;t<=b;t++){
			for(int h=t;h<=b;h++){
				if((t==h) and (SumaDivNum(t)==h) and (SumaDivNum(h)==t)){
					cout<<t<<" y "<<h<<" son numeros perfectos"<<endl;
				}else{
						cout<<"No hay numeros perfectos entre "<<a<<" y "<<b;
					}
			}
		
		}
	}else if (c=='m'){
			h=MCM(a, b);
			cout<<h;
		}else if(c=='d'){
				h=MCD(a,b);
				cout<<h;
			}else if((c=='+') or (c=='-') or (c=='*') or (c=='/')){
					h=calcular(a, b, c);
					cout<<h;
				}

	cout<<endl;
return 0;
}
