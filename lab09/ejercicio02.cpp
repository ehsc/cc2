/*
2. Se pide escribir una función utilizando plantillas que tome dos argumentos
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas.
*/

#include <iostream>

template <class T>
void operacionesBasicas(T num1, float num2){
	//Suma
	std::cout << "Suma: " << num1 + num2;
	//Resta
	std::cout << "\nResta: " << num1 - num2;
	//Multiplicacion
	std::cout << "\nMultiplicación: " << num1 * num2;
	//Division
	std::cout << "\nDivisión: " << num1 / num2;
}

int main(){

	int numero1;
	float numero2;

	std::cout << "Ingrese un numero(entero): "; std::cin >> numero1;
	std::cout << "Ingrese un numero(float): "; std::cin >> numero2;

	operacionesBasicas(numero1,numero2);
	std::cout << std::endl;
	return 0;
}