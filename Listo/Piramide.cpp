#include <iostream>
using namespace std;

/*Escribe un programa que lea un número natural N por teclado y dibuje un triángulo de
asteriscos con base y altura N. Por ejemplo si N=5 debería dibujarse:*/

void leerDatos(unsigned& x){
 int n;
 do{
  cout << "Introduce altura de la pirámide: ";
  cin >> n;
 }while( n < 1);
 x = n;
}

void dibujarFila(unsigned x, unsigned i){
 for(unsigned j = 1; j <= (x-i); j++){
  cout << " ";
 }
 for(unsigned j = 1; j<= i; j++){
  cout << "* ";
 }
 for(unsigned j = 1; j <= (x-i); j++){
  cout << " ";
 }
}

void dibujarPiramide (unsigned x){
 for(unsigned i = 1; i <= x; i++){
  dibujarFila(x, i);
  cout << endl;
 }
}

int main() {
 unsigned x;
 leerDatos(x);
 dibujarPiramide(x);
 return 0;
}
