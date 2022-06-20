/*
Defina una Cola que permita insertar elementos utilizando clases.
*/

#include <iostream>

class Nodo {
public:
    int dato;
    Nodo* next;
};

bool colaVacia(Nodo* primero){

	return (primero == NULL)? true : false;
}

void insertar(Nodo* primero, Nodo* ultimo, int n) {
	
	Nodo* nuevoNodo = new Nodo();

	nuevoNodo -> dato = n;
	nuevoNodo -> next = NULL;

	if(colaVacia(primero)){
		primero = nuevoNodo;
	}else{
		ultimo -> next = nuevoNodo;
	}
	ultimo = nuevoNodo;
	std::cout << "Elemento insertado!\n";
}

int main(){
	Nodo* primero = NULL;
	Nodo* ultimo = NULL;

	int dato;

	std::cout << "Ingrese un numero: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	std::cout << "Ingrese un numero: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	std::cout << "Ingrese un numero: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	std::cout << "Ingrese un numero: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	std::cout << "Ingrese un numero: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	return 0;
}