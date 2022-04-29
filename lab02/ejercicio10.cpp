/*
10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
una a una las letras de la palabra introducida empezando por la última.
*/

#include <iostream>
#include <string>

int main(){

	std::string palabra;

	std::cout << "Ingrese una palabra: ";
	getline(std::cin, palabra);

	for(int i = palabra.length() - 1; i >= 0; i--){
		std::cout << palabra[i] << " ";
	}
	std::cout << std::endl;

	
}