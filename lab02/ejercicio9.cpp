/*
9. Escribir un programa que pida al usuario un número entero y muestre por pantalla un
triángulo rectángulo como el de más abajo, de altura el número introducido.
*
**
***
****
*****
*/

#include <iostream>

int main(){

	int n;

	std::cout << "Ingrese un numero entero(altura): ";
	std::cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
		std::cout<<"*";
		}
	std::cout<<std::endl;
	}

}