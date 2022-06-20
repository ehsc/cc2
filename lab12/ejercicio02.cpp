/*
Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Cola.
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

void insertar(Nodo*& primero, Nodo*& ultimo, int n) {
	
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

void eliminar(Nodo*& primero, Nodo*& ultimo, int &n){
	n = primero -> dato;
	Nodo* aux = primero;

	if(primero == ultimo){
		primero = NULL;
		ultimo = NULL;
	}else{
		primero = aux -> next;
	}
	delete aux;
}

int main(){
	Nodo* primero = NULL;
	Nodo* ultimo = NULL;

	int dato;

	insertar(primero, ultimo, 5);
	insertar(primero, ultimo, 2);
	
	std::cout << "Ingrese un elemento(numero) a la cola: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	std::cout << "Ingrese un elemento(numero) a la cola: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	std::cout << "\nEliminando elementos de la cola...\n";
	while(primero != NULL){
		eliminar(primero, ultimo, dato);
		std::cout<<"Se ha eliminado el elemento: "<< dato <<"\n";
	}

	return 0;
}
   