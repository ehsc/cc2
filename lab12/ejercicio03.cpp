/*
Implemente un algoritmo para buscar elementos de la Cola.
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

void buscar(Nodo*& primero){
    Nodo* temp = primero;
    int buscado;
    bool encontrado = false;
    std::cout << "Ingrese numero a buscar: ";
    std::cin >> buscado;
 
    while (temp != NULL && encontrado != true) {
        if(temp -> dato == buscado){
            std::cout << "Encontrado! " << buscado << "\n";
            encontrado = true;
        }
        temp = temp->next;
    }
    if(encontrado == false){
        std::cout << "No encontrado!" << std::endl;
    }
}


int main(){
	Nodo* primero = NULL;
	Nodo* ultimo = NULL;

	int dato;
	
	std::cout << "Ingrese un elemento(numero) a la cola: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	std::cout << "Ingrese un elemento(numero) a la cola: ";
	std::cin >> dato;
	insertar(primero, ultimo, dato);

	buscar(primero);
	
	return 0;
}
