/*
2.Calcule los primeros 50 números primos y muestre el resultado en pantalla.

*/

#include<iostream>


int main(){
	int cantidadPrimos = 50;
	for(int i = 1; i <= cantidadPrimos; i++){
		int contador = 0;
		for(int x = 2; x <= i/2; x++){
			if(i%x == 0){
				contador++;
			}
		}
		if(contador < 1){
			std::cout << i <<" ";
		}
	}
	std::cout << "\n";
	
}