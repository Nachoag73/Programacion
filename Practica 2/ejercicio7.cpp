#include <iostream>

//Ignacio Aragon 

using namespace std;

int main (){
	
	char a;
	unsigned b;


	cout << "Dime la palabra acabada en punto"<<endl;
	cin>>a;

	while (a != '.'){

		
		b=unsigned (a);
		b=b-97+unsigned (a);
		a=char (b);
		cout << a;
		cin >> a;
		
	}
	
	return 0;
}
