/*
5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
media de los números leídos.
*/

#include <iostream>
#include <vector>

int main(){

	int n, mayor = 0, menor = 9999999, suma = 0;

	std::cout << "Cantidad de numeros a ingresar: ";
	std::cin >> n;

	std::vector<int> numeros(n);

	for (int i = 0; i < n; i++){
		std::cout << "Ingrese un numero: ";
		std::cin >> numeros[i];
	}

	for (int i = 0; i < n; i++){
		if(numeros[i] > mayor)
			mayor = numeros[i];
		if(numeros[i] < menor)
			menor = numeros[i];
		suma = suma + numeros[i];  
	}

	int media = suma / n;

	std::cout << "mayor: " << mayor << "\n";
	std::cout << "menor: " << menor << "\n";
	std::cout << "media: " << media << "\n";

}