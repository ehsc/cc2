/*
3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par.
*/

#include <iostream>

int main(){

	int matriz[5][3];
	int sumaFilasPar = 0;

	std::cout<<"Ingrese los numeros para:\n";
	for(int i = 0; i < 5; i ++){
		for(int j = 0; j < 3; j ++){
			std::cout << "Fila [" << i+1 << "] Columna [" << j+1 << "]: ";
			std::cin >> matriz[i][j];
		}
	}

	std::cout << "Mostrando matriz ingresada\n";

	for(int i = 0; i < 5; i ++){

		for(int j = 0; j < 3; j ++){

			std::cout << matriz[i][j] << " ";
			if(matriz[i][j] < 100){
				std::cout << " ";
				if(matriz[i][j] < 10)
					std::cout << " ";
			}
		}
		if(i % 2 != 0){
				std::cout << " <- Fila Par";
			}
		std::cout<<std::endl;
	}

	for(int i = 0; i < 5; i ++){
		for(int j = 0; j < 3; j ++){
			if(i % 2 != 0){
				sumaFilasPar += matriz[i][j];
			}
		}
	}

	std::cout << " Suma de Filas Pares es: " << sumaFilasPar << std::endl;

}