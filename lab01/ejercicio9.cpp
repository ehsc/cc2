/*Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean
negativos*/

#include <iostream>
int main(){

	int suma = 0;
 	int numeros [10];

	for (int i=0; i<10;i++){
		std::cout << "Ingrese un numero: ";
		std::cin >> numeros[i];
	}
	for (int j=0; j<10;j++){
		if(numeros[j] < 0){
			suma += numeros[j];
		}
		
	}
	std::cout << "\nLa suma de negativos ingresados es: " << suma << "\n" ;
}