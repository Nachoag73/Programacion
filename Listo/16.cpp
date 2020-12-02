#include <iostream>
using namespace std;
//Escribe un algoritmo que lea una frase terminada en punto por teclado y la conviertaen una secuencia de número utilizando la codificación letra-dígito habitual de losteclados de los teléfonos. Esta codificación asigna los siguientes dígitos a cada letradel alfabeto: espacio (1), abc (2), def (3), ghi (4), jkl (5), mno (6), pqrs (7), tuv (8), wxyz(9).


void PasoLetANum(char l){
		
	while(l!='.'){
		
		if((l=='a') or (l=='b') or (l=='c')){
			cout<<"2"<<" ";
			}else if((l=='d') or (l=='e') or (l=='f')){
				cout<<"3"<<" ";
				}else if((l=='g') or (l=='h') or (l=='i')){
					cout<<"4"<<" ";
					}else if((l=='j') or (l=='k') or (l=='l')){
						cout<<"5"<<" ";
						}else if((l=='m') or (l=='n') or (l=='o')){
							cout<<"6"<<" ";
							}else if((l=='p') or (l=='q') or (l=='r') or (l=='s')){
								cout<<"7"<<" ";
								}else if((l=='t') or (l=='u') or (l=='v')){
									cout<<"8"<<" ";
									}else if((l=='w') or (l=='x') or (l=='y') or (l=='z')){
										cout<<"9"<<" ";
										}else if(l==' '){
											cout<<"1"<<" ";
											}
		cin>>l;
	}
}

int main(){
	char l;
	cout<<"Dime la palabra acabada en punto"<<endl;
	cin>>l;

	PasoLetANum(l);

	cout<<endl;
return 0;
}
	

