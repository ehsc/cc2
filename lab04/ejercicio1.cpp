/*
1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.
*/

#include <iostream>
#include <vector>
#include <string>
int main(){

	std::string nombres[3];
	std::string apellidos[3];
	std::vector<int> edad(3);
	std::vector<int> DNI(3);
	

	std::cout << "Ingrese los siguientes datos: \n";
	for(int i=0; i<3; i++){

		std::cout <<"\n----- Persona " << i + 1 << " -----\n";
		std::cout << "Nombre: ";
		
		std::getline(std::cin , nombres[i]);

		std::cout << "Apellido: ";
		std::getline(std::cin , apellidos[i]);
		std::cout << "Edad: ";
		std::cin >> edad[i];
		std::cout << "DNI: ";
		std::cin >> DNI[i];
		std::cin.ignore();
	}

	std::cout << "\n///// Mostrando datos /////\n";
	for(int i=0; i<3; i++){
		std::cout <<"\n----- Persona " << i + 1 << " -----\n";
		std::cout << "\nNombre: " << nombres[i];
		std::cout << "\nApellido: " << apellidos[i];
		std::cout << "\nEdad: " << edad[i];
		std::cout << "\nDNI: " << DNI[i] << "\n";
		
	}

}
