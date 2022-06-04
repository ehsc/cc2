/*
3. Se pide escribir una función utilizando plantillas que tome dos valores genéricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe.
*/
#include <iostream>
#include <string>

template <class T>
void generarCorreo(T letra, std::string apellido){
	std::cout << letra << apellido << "@unsa.edu.pe\n";
}
int main(){

	char a;
	std::string b;

	for(int i = 0; i<5; i++){
		std::cout << "Ingrese una letra: "; std::cin >> a;
		std::cout << "Ingrese su apellido: "; std::cin >> b;
		generarCorreo(a,b);
	}
	return 0;
}