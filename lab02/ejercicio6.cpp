/*
6  Elabore un programa que calcule la serie de Fibonacci
*/
#include<iostream>

int main(){

	int numero, a = 0, b = 1, c = 0;
	std::cout<<"Ingrese un numero: "; std::cin >> numero;
	for(int i = 0; i <= numero; i++){
		c = a;
		a = b;
		b = a+c;
		std::cout << c << " ";
	}
	
	std::cout << "\n";
}