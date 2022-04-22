/*Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
el producto de ambos.*/

#include <iostream>

int main(){

	int num1, num2, producto;

	std::cout << "Ingrese el primer numero: \n";
	std::cin >> num1;

	std::cout << "Ingrese el segundo numero:  \n";
	std::cin >> num2;

	producto = num1 * num2;

	std::cout << "El producto de ambos numeros ingresados es: " << producto << "\n";
}
