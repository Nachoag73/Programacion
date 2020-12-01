//SUMAR RESTAR MULTIPILACAR Y DIVIDIR DEPENDIENDO DEL CARACTER
#include <iostream>
using namespace std;

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

int main(){

	int a, b, d;
	char c;

	cout<<"Dame"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;

	d=calcular(a,b,c);

	cout<<d;
return 0;
}
