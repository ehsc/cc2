/*
Defina una lista enlazada que permita insertar elementos al final de todos los
elementos que ya se hayan ingresado. Por el momento no es necesario preservar un
orden, simplemente los elementos nuevos deben de ingresar como el último
elemento.
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
 
void insertarFinal(nodo*& encabezado, int elem){
    nodo* n = new nodo(elem);
    if (encabezado == NULL) {
        encabezado = n;
        return;
    }
 
    nodo* temp = encabezado;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
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
	insertarFinal(encabezado, 1);
    insertarFinal(encabezado, 2);
    std::cout << "Despues de la inserción: ";
    mostrar(encabezado);
    std::cout << std::endl;
    return 0;
}