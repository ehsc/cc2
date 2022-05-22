/*
3.
Construya una lista enlazada simple utilizando solo punteros. Añada las funciones
de insertar y eliminar un elemento. En la función insertar se debe asegurar que los
números insertados estén en orden creciente. Simule el proceso con 10000 números
aleatorios sin que el programa falle.
*/

#include <iostream>

struct Nodo{
	int dato;
	Nodo *siguiente;

};
Nodo* lista = NULL;

void insertar(Nodo *&lista, int numero){
	Nodo *nuevoNodo = new Nodo;
	nuevoNodo -> dato = numero;

	Nodo *aux1 = lista;
	Nodo *aux2;
	while((aux1 != NULL) && (aux1 -> dato < numero)){
		aux2 = aux1;
		aux1 = aux1 -> siguiente;
	}
	if(lista == aux1){
		lista = nuevoNodo;
	}else{
		aux2 -> siguiente = nuevoNodo;
	}

	nuevoNodo -> siguiente = aux1;
	
	std::cout << numero << " insertado!\n";
}

void eliminar(Nodo *&lista, int numero){
	if(lista != NULL){
		Nodo *auxBorrar;
		Nodo *anterior = NULL;
		auxBorrar = lista;
		
		while((auxBorrar != NULL) && (auxBorrar -> dato != numero)){
			anterior = auxBorrar;
			auxBorrar = auxBorrar -> siguiente;
		}
		if (auxBorrar == NULL){
			std::cout << "Elemento no existe!";
		}else if(anterior == NULL){
			lista = lista -> siguiente;
			delete auxBorrar;
			std::cout << numero << " eliminado!\n";
		}else{

			anterior -> siguiente = auxBorrar->siguiente;
			delete auxBorrar;
			std::cout << numero << " eliminado!\n";
		}
	}

}
void menu(){
	int opcion, dato;
	do{
		std::cout << "\n1. Insertar\n";
		std::cout << "2. eliminar\n";
		std::cout << "3. Salir\n";
		//std::cout << "4. Salir\n";
		std::cout << "\nIngrese una opción: ";
		std::cin >> opcion;
		switch(opcion){
			case 1:
				std::cout << "Inserte un numero a la lista: ";
				std::cin >> dato;
				insertar(lista,dato);
				break;
			case 2:
				Nodo* actual = new Nodo();
				
				actual = lista;
				while(actual != NULL){
					std::cout << actual -> dato << " -> ";
					actual = actual -> siguiente;
				}
				std::cout << "\nElimine un numero de la lista: ";
				std::cin >> dato;
				eliminar(lista,dato);
				std::cout << '\n';
				break;

		}
	}while(opcion < 3);

}

int main(){
	menu();
	return 0;
}
