#include <iostream>

	//Ignacio Aragon Garcia  PC309

using namespace std;

int main(){
	int t;
	int d;
	int h;
	int m;
	int s;
	int r2;

	cout << "Dime el tiempo en segundos " << endl;
	cin >> t;

	d = t/(24*3600);
	h = t/3600;
	r2 = t%3600;
	m = r2/60;
	s = r2%60;


	cout << d << endl;
	cout << h<< endl;
	cout << m<< endl;
	cout << s<< endl;


	return 0;
}
