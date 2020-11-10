#include <iostream>

using namespace std;

//Numeros amigos

unsigned sumadiv(unsigned n);


int main(){

	unsigned a, b;

	cout<<"a";
	cin>>a;
	cout<< "b";
	cin>>b;

	for (unsigned x=a; x<=b; x++){
		for(unsigned y =x;y<=b; y++){
			if((sumadiv( x )==y) and (sumadiv ( y )==x)){
				cout<<"("<< x<<","<<y<<")"<< " ";
			}
		}
	}
	
cout<<endl;
return 0;
}

unsigned sumadiv(unsigned n){
	unsigned suma;

	suma=0;
	for (unsigned t=1;t<=n/2;t++){
		if(n%t==0){
			suma=suma+t;	
		}
	}

return suma;
}


