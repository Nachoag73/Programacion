#include <iostream>

	//Ignacio Aragon Garcia  PC309

using namespace std;

int main(){

	char l1;
	char l2;



	cout << "Dime la primera letra"<<endl;
	cin >> l1;
	cout << "Dime la segunda letra"<<endl;
	cin >> l2;

		
		if(l1<l2){
			cout << "Las letras están ordenadas"<<endl;
	}else{
		cout << "Las letras están desordenadas"<< endl;
	}

	return 0;
}
