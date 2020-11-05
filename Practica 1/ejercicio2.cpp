#include <iostream>

	//Ignacio Aragon Garcia  PC309

using namespace std;

const float pesobandeja=30;
const float pesomonedas=7.3;

int main(){

	float p;	//peso
	float c;	//cantidad de monedas
	unsigned c1;		//conversion

	cout << "Dime el peso de la bandeja"<<endl;
	cin >> p; //44.6

	c=(p-pesobandeja)/pesomonedas;
	c1= unsigned(c + 0.5);

 cout << "Hay " << c1 << " monedas en la bandeja"<<endl;

	return 0;
}
