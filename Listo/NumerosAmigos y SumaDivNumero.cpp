#include <iostream>

using namespace std;

unsigned SumaDivNum(unsigned n){
	unsigned s;
	s=0;
	for(unsigned d=1; d<=n/2; d++){ //El bucle for es hasta n/2 porque no se cuenta n
		if(n%d==0){
			s=s+d;
		}
	}
return s;
}

int main(){
	unsigned n;
	unsigned m;

	cout<<"Dame n y m"<<endl;
	cin>>n;
	cin>>m;

	for(unsigned t=n;t<=m;t++){
		for(unsigned h=t;h<=m;h++){
			if((SumaDivNum(t)==h) and (SumaDivNum(h)==t)){
				cout<<t<<" y "<<h<<" son numeros amigos"<<endl;
			}
		}
		
	}
return 0;
}
