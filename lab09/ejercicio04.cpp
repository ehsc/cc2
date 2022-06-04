/*
4. Implemente un programa que haga uso de plantillas para determinar el mínimo y
máximo valor de un arreglo de elementos dado. Debe de existir dos funciones, la
primera que retorne el mayor de los valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se hace una prueba de estas funciones,
con arreglos de enteros y flotantes.

int ArrayEntero [5] = {10,7,2, 8, 6};
float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};

*/

#include <iostream>

template<class T> 
T maximoValor(const T* arreglo, int arregloSize){
    T maximo = arreglo[0];
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    for(int i = 1; i < arregloSize; i++){
		if(arreglo[i] > maximo){
			maximo = arreglo[i];
		}    	
    }
    return maximo;
}

template<class T> 
T minimoValor(const T* arreglo, int arregloSize){
    T minimo = arreglo[0];
    
    for(int i = 1; i < arregloSize; i++)
    	if(arreglo[i] < minimo)
    		minimo = arreglo[i];
    return minimo;
}

int main(){

	int ArrayEntero [5] = {10,7,2, 8, 6};
	int arregloTamanio = sizeof ArrayEntero/sizeof ArrayEntero[0];
	
	float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
	int arregloTamanio2 = sizeof ArrayFloat/sizeof ArrayFloat[0];

	std::cout << "Maximo: " << maximoValor(ArrayEntero,arregloTamanio) <<std::endl;
	std::cout << "Minimo: " << minimoValor(ArrayEntero,arregloTamanio)<<std::endl;

	std::cout << "Maximo: " << maximoValor(ArrayFloat,arregloTamanio) <<std::endl;
	std::cout << "Minimo: " << minimoValor(ArrayFloat,arregloTamanio)<<std::endl;
	return 0;
}