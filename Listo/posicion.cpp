#include<iostream>

using namespace std;

unsigned NumDig(unsigned n){
	unsigned cont=0;
	do{
		n=n/10;
		cont++;

	}while(n!=0);

return cont;
}

unsigned PosicionI(unsigned N, unsigned i){
	unsigned p;
	unsigned cont=1;

	do{
		N=N/10;
		cont++;
		}while(cont!=i);
		p=N%10;

return p;
}

int main(){
	unsigned N;
	unsigned i;

	cout<<"Dame el numero N"<<endl;
	cin>>N;
	cout<<"Dame la posición"<<endl;
	cin>>i;

	if(i>NumDig(N)){
		cout<<"El resultado es "<<"-1"<<endl;
	}else{
			N=PosicionI(N,i);
			cout<<"El resultado es el digito "<<N<<endl;
		}
	
return 0;
}
