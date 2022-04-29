/*
Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el
año leído por teclado, comprueba si es o no bisiesto.
*/

#include <iostream>

void bisiesto (int year){
	if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
		std::cout << year <<" es un año bisiesto\n";
	}else{
		std::cout << year <<" no es un año bisiesto\n";
	}
}

int main(){
	int anio;
	std::cout << "Ingrese un año: ";
	std::cin >> anio;

	bisiesto(anio);
}