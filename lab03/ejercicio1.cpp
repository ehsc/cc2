/*
1. Hacer un programa que sin usar la función pow(), pero por medio de una función,
calcule la potencia de un número (ambos números ingresados por teclado).
*/

#include <iostream>

int Potencia(int x, int y){
	int i=0;
	int rpta=1;

	do{
		rpta = rpta*x;
		i++;
	}while(i < y);
	
	return rpta;
}

int main(){
	int num1,num2;
	std::cout << "Ingrese un numero: ";
	std::cin >> num1;
	std::cout << "A que numero desea elevarlo? ";
	std::cin >> num2;
	std::cout << num1 << "^" << num2 << " = " << Potencia(num1,num2) << std::endl;
}