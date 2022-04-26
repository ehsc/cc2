/*
1. Sumar todos los enteros pares desde 2 hasta 100.
*/

#include <iostream>

int main(){
	int suma = 0;
	for (int i = 2; i < 100; i+=2){
		suma = suma + i;
	}
	std::cout << suma << "\n";
}