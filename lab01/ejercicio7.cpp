/*Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro*/

#include <iostream>

int main(){

	int num1, num2;

	std::cout <<"Ingrese el primer numero\n";
	std::cin >> num1;

	std::cout << "Ingrese el segundo numero\n";
	std::cin >> num2;

	if (num1 % num2 == 0){
		std::cout << num2 <<" es divisor de " << num1 << "\n";

	}else if(num2 % num1 == 0){
		std::cout << num1 <<" es divisor de " << num2 << "\n";
	}
}