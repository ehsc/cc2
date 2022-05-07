/*
2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.
*/

#include <iostream>

bool busqueda(int num, int valores[]){
	bool a;
	for(int i = 0; i < 8; i ++){
		if(num == valores[i]){
			a = true;
		}
	}
	if (a == true){
		return true;
	}else{
		return false;
	}
}

int main(){

	int arreglo [8];
	int numero;

	std::cout << "Ingrese ocho numeros\n";
	for (int i = 0; i < 8; i ++){
		std::cin >> arreglo[i];
	}

	std::cout << "Ingrese un numero a buscar: ";
	std::cin >> numero;

	std::cout << busqueda(numero, arreglo) << "\n";
}