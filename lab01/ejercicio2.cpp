/*Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).*/

#include <iostream>
#include <string>

int main(){

	std::string primerNombre;
	std::string apellidoPaterno;
	std::string apellidoMaterno;
	std::string correoUnsa;

	std::cout << "\nIngrese su primer nombre: ";
	std::cin >> primerNombre;

	std::cout << "\nIngrese su apellido paterno: ";
	std::cin >> apellidoPaterno;

	std::cout << "\nIngrese su apellido materno: ";
	std::cin >> apellidoMaterno;

	primerNombre = primerNombre.at(0);
	apellidoMaterno = apellidoMaterno.at(0);

	correoUnsa = primerNombre + apellidoPaterno + apellidoMaterno;

	std::cout << "\n" << correoUnsa << std::endl;

}