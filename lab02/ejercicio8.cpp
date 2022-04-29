/*
8. Escribir un programa que genere la tabla de multiplicar de un número introducido por
el teclado.
*/

#include<iostream>

int main(){
	int num, multiplo;
	std::cout << "Ingrese un numero: "; std::cin >> num;
	std::cout << "Tabla de " << num << std::endl;
	for(int i = 1; i <= 12; i++){
		multiplo = num * i;
		std::cout << num << " * " << i << " = " << multiplo << std::endl;
	}
	
}