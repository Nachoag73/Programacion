/*Decimos que una sucesión a1,a2,...,an de enteros forma una montaña, si existe un h tal
que : 1 <= h <= n y además
a1 < ...ah-1 < ah > ah+1 > ...an
Definimos la longitud de una montaña como el número de enteros que la forman. Por ejemplo
la sucesión -7, -1, 6, 21, 15 es una montaña de longitud 5.
Definimos un valle de la misma forma que una montaña pero cambiando el signo de las
desigualdades de la definición anterior:
a1 > ...ah-1 > ah < ah+1 < ...an
Por ejemplo 24, 13, 6, 15, 50 sería un valle.
Dada una secuencia de enteros terminada en cero (0) que como mínimo contiene una montaña
y un valle (suponemos que la secuencia de enteros de entrada es una secuencia correcta de
montañas y valles), diseña un programa que calcule la longitud de la montaña y el valle más
largos.*/

#include<iostream>
using namespace std;


void leerNumero(int& mmontana, int& mvalle){
 int num, ant=0;
 int montana =0;
 int valle = 0;
 mmontana =0;
 mvalle =0;
 int antant=0;
 cout << "Introduce: "<<endl;
 cin >> num;
 while(num!= 0){
  if(num < ant && antant < ant){
   valle = 2;
  }else{
   valle++;
   if(mvalle < valle){
    mvalle = valle;
   }
  }
  if(num > ant && antant > ant){
   montana =1;

  }else{
   montana++;
   if(mmontana < montana){
    mmontana = montana;
   }
  }
  antant = ant;
  ant= num;
  cin >> num;
 }
}

int main() {
 int mmontana;
 int mvalle;
 leerNumero(mmontana, mvalle);
 cout <<"Mayor montaña: "<< (mmontana+1) << endl;
 cout << "Mayor valle: "<< mvalle;
 return 0;
}
