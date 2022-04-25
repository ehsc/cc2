/*Escribir un programa que almacene la cadena de caracteres contraseña en una
variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña
correcta.*/

#include <iostream>
#include <string>

int main(){

	std::string password;
	std::string password2;
	std::cout << "Registre su contraseña: ";
	getline(std::cin,password);//Incluye espacios

	do{
		std::cout << "Ingrese su contraseña: ";
		getline(std::cin,password2);
	}while(password2 != password);

	std::cout << "Contraseña Valida!\n";
}