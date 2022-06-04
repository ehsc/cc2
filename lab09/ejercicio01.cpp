/*
1. Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.
*/
#include <iostream>

template <class T>
void MaxMin (T a, T b, T c){
	T maximo, minimo;
	if (a > b && a > c){
		maximo = a;
	}else{
		if(b > a && b > c){
			maximo = b;
		}else{
			maximo = c;
		}
	}

	if (a < b && a < c){
		minimo = a;
	}else{
		if(b < a && b < c){
			minimo = b;
		}else{
			minimo = c;
		}
	}

	std::cout << "Maximo: " << maximo << "\nMinimo: " << minimo << std::endl;
}


int main(){

	int x, y, z;
	std::cout << "Ingrese tres numeros\n"; 
	std::cin >> x >> y >> z;
	MaxMin(x,y,z);
	return 0;
}