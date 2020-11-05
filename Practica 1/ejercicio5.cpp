#include <iostream>

using namespace std;

int main(){
	int a;
	int b;
	int da; //decenas de a	
	int db; //decenas de b

	cout << "Dime el primer numero" <<endl;
	cin >> a;

	cout <<"Dime el segundo numero" <<endl;
	cin >> b;
	
	if (a<10 or b<10){
			cout << "ERROR" << endl;

		}else {

			da=a/10;
			db=b/10;
			
			if (da>db){
				cout << a << " tiene su cifra de las decenas mayor a " << b <<endl;
				}else{
					if (db>da){
					cout << b << " tiene su cifra de las decenas mayor a " << a <<endl;
					}else {
							if(da==db){
								cout << a << "tiene la misma cifra en las decenas " << b <<endl;
							}
						}
					}
				}

	return 0;
}
