/*Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
en binario.*/

#include <iostream>
#include <bitset>

int main(){

	int num;

	std::cout << "Ingrese un numero: \n";
	std::cin >> num;
	
	while(num < 100 || num > 999){
		std::cout << "Ingrese otro numero: \n";
		std::cin >> num;
		if(num > 100 && num < 999){
			std::string binario = std::bitset<8>(num).to_string();
			std::cout<< num << " en binario es " << binario << "\n";
		}
	}
				
}