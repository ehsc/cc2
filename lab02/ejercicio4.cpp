/*
4. Escriba un código que solicite ingresar dos números x y y, tal que x < y. Muestre
todos los números primos que se encuentren entre el rango de valores, de no
encontrarse, mostrar el primo más cercano a x o y.

*/

#include <iostream>

int main(){

	int numx, numy;

	std::cout << "Los numeros ingresados deben cumplir x < y\n";
	
	std::cout << "Ingrese el valor de x: ";
	std::cin >> numx;

	std::cout << "Ingrese el valor de y: ";
	std::cin >> numy;

	if(numx < numy){
		for(int i = numx + 1; i < numy; i++){
			int contador = 0;

			for(int j = 2; j <= i/2; j++){
				if(i % j == 0){
					contador++;
				}
			}
			if(contador < 1){
				std::cout << i <<" ";
		
			}
		}
	}else{
		std::cout << "Numeros ingresados no cumplen con x < y\n";
	}
//No muestra el primo más cercano a x o y. :(
	std::cout << std::endl;

}