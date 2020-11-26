#include <iostream>
#include <cmath>

using namespace std;

unsigned long partirNumeros (unsigned long n, unsigned long dp, unsigned long di){
	unsigned long d;
	unsigned pos=0;

	do{
		d=n%10;
		n=n/10;
		pos++;

		if(pos%2==0){
		dp=dp*10+d;

		}else{
			di=di*10+d;
			}
	}while(n!=0){;

	return di, dp;

	}
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

int main (){
	unsigned long n, t, di, dp;
	cout<<"Dime un numero"<<endl;
	cin<<n;
	
	n=partirNumeros(n, dp, di);
	di=sumaDigitos(di);
	dp=multDigitos(dp, 2);
	dp=sumaDigitos(dp);
	
	t=dp+di;
	if (t%10==0){
		cout<<"VERDADERO";
	}else{
		cout<<"FALSO";
	}

cout<<endl;
return 0;
}



