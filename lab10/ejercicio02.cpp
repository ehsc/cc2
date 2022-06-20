/*
Con la implementación de la lista enlazada anterior, desarrolle una función que
permita ingresar los elementos al inicio de todos los demás elementos. Tendrá que
modificar el comportamiento del puntero que tiene referencia al primer elemento
para que sea redireccionado al nuevo elemento por ingresar.
*/
#include <iostream>


class nodo {
public:
    int data;
    nodo* next;
 
    nodo(int value)        
    {                    
        data = value;     
        next = NULL;     
    }
};

void insertarInicio(nodo*& encabezado, int elem){
    nodo* n = new nodo(elem);
    n->next = encabezado;
    encabezado = n;
}


void mostrar(nodo*& encabezado){
    nodo* temp = encabezado;
 
    while (temp != NULL) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

int main(){
	nodo* encabezado = NULL;
	insertarInicio(encabezado, 8);
    insertarInicio(encabezado, 9);
    std::cout << "Despues de la inserción: ";
    mostrar(encabezado);
    std::cout << std::endl;
    return 0;
}