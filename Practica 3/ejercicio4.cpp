#include <iostream>

//Ignacio Aragon Garcia 

using namespace std;

int main(){

	int k;
	int cn;//negativos
	int cp;//positivos
	
	cout<<"Dime los numeros acabados en 0"<<endl;
	cin>> k;

	cp=0;
	cn=0;

	while (k!=0){
		
		if(k<0){
			
			cn++;	
		
		}else{

			cp++;

		}

		cin>>k;
	}//while (k!=0)

	if (cp==cn){

			cout << "Hay el mismo numeros positivos que de negativos"<<endl;	

		}else{

			if(cp>cn){

				cout << "Hay mas numeros positivos"<<endl;

			}else{

						cout << "Hay mas numeros negativos"<<endl;

			}

		}

	return 0;

}
