/*
4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).
*/

#include <iostream>

void primos(int x){
	
	for(int i = 1; i <= x; i++){
		int contador = 0;
		for(int j = 2; j <= i/2; j++){
			if(i%j == 0){
				contador++;
			}
		}
		if(contador < 1){
			std::cout << i <<" ";
		}
	}
	std::cout << std::endl;

}

int main(){
	int number;;
	std::cout << "Ingrese un numero: ";
	std::cin >>number;
	primos(number);
}