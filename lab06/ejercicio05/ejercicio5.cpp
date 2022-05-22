/*
Implementar un programa con clases que haga la búsqueda de un dato
almacenado en una matriz de 3x3 que tiene los números de 1 al 9 ingresados
aleatoriamente y debe indicar la posición donde se encuentra el dato
*/
// ejercicio5.cpp

#include "matriz.h"
#include <iostream>
#include <random>
Matriz::Matriz(int _matrizSize, int _numeroBuscado){
	matrizSize = _matrizSize;
	numeroBuscado = _numeroBuscado;
}
Matriz::~Matriz(){
}
void Matriz::buscarEnMatriz(){
	int matrizG[matrizSize][matrizSize];
	//Generar matriz con numeros aleatorios
	for(int i = 0; i < matrizSize; i++){
		for(int j = 0; j < matrizSize; j++){
			std::random_device rd;
			std::mt19937 mt(rd());
			std::uniform_int_distribution<int> dist(1,9);
			matrizG[i][j] = dist(mt);
		}
	}
	//Imprimir matriz
	for(int i = 0; i < matrizSize; i++){
		for(int j = 0; j < matrizSize; j++){
			cout << matrizG[i][j] << " ";
		}
		cout<<endl;
	}
	//Enontrar numero e indicar posición
	
	for(int i = 0; i < matrizSize; i++){
		for(int j = 0; j < matrizSize; j++){
			if(matrizG[i][j] == numeroBuscado){
				cout << "Numero encontrado! \nPosicion [" << i+1 <<"]["<< j+1 << "]\n";
			}
		}
	}
}

int main(){
	int matrixSize = 3;
	int numero;

	cout << "ingrese un numero a buscar: ";
	cin >> numero;

	Matriz m = Matriz(matrixSize,numero);
	m.buscarEnMatriz();
	
	return 0;
}