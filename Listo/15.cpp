#include <iostream>
using namespace std;
/*Escribe un algoritmo que acepte como entrada desde teclado un número enteropositivo y dé como salida el resultado de sumar dos a dos los dígitos que aparecen enposiciones simétricas respecto al dígito central dentro del número dado como entrada. Por ejemplo: para el número :  2354869la salida es: 2 + 9 = 11,   3 + 6 = 9,   5 + 8 = 13,   4para el número : 6582la salida es : 6 + 2 = 8,   5 + 8 = 13 */



void introducirDatos(unsigned& N){
 cout << "Introduce N  (>0) : ";
 cin >> N;
}

unsigned longitudNumero(unsigned num){
 unsigned contador = 0;
 while(num!= 0){
	num = num/10;
  contador++;
 }
 return contador;
}
unsigned potencia(int a,int b) { //potencia(10, 3)
 unsigned resultado = 1;
 if(b == 1){
  resultado = a;
 } else if (b > 1){
  for(int i = 1; i <= b; i++){
   resultado = resultado * a;
  }
 }
 return resultado;
}

int calcularDigito(unsigned N, unsigned i){
 int num;
 num = N /(potencia( 10,(i-1)  ));
 if(num == 0){
  num = -1;
 }else{
  num = num%10;
 }
 return num;
}

void Sumar(unsigned N){
 unsigned longitud = longitudNumero(N);
 unsigned long2= longitud;

 unsigned suma;
 for(int i =1; i <= int(longitud/2); i++){
  suma = calcularDigito(N, i) + calcularDigito (N, long2);
  cout << calcularDigito (N, long2)<< "+" << calcularDigito(N, i)   <<"=" << suma << " ";
  long2 --;
 }
 if(longitud%2 != 0){
  cout << calcularDigito(N, unsigned(longitud/2)+1 );
 }
}


int main() {
 unsigned N;
 introducirDatos(N);
 Sumar(N);


 return 0;
}
