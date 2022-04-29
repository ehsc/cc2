/*
5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x.
*/

#include <iostream>

bool introducirvalor(int x){
	if(x > 0 && x < 100){
		return true;
	}else{
		return false;
	}
}

bool esPar(int x){
	if(x % 2 == 0){
		return true;		
	}else{
		return false;
	}
}

void sumaImpares(int x){
	int suma = 0;
	for (int i=0; i<x; i++){
		if(i % 2 != 0){
			suma += i;
		}	
	}
	std::cout << suma <<std::endl;
	
}

int main(){
	int num;
	std::cout << "Introduzca un numero: ";
	std::cin >> num;

	if(introducirvalor(num) == true && esPar(num) == true){
		sumaImpares(num);
	}else{
		std::cout << "Numero no valido\n";
	}
}