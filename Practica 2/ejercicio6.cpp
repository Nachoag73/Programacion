#include <iostream>

//Ignacio Aragon 

using namespace std;

int main (){
	
	char a;
	unsigned b;
	int d;

	d=1;

	cout << "Dime la palabra acabada en punto"<<endl;
	cin>>a;

	while (a != '.'){

		
		b=unsigned (a);
		b=b+d;
		a=char (b);
		cout << a;
		d++;
		cin >> a;
		
	}
	
	return 0;
}
