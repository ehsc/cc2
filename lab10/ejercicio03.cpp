/*
Desarrolle una función que permita ingresar elementos en el medio de dos
elementos de la lista enlazada, como se muestra en la siguiente imagen. Solicite que
se ingrese una posición válida dentro de la lista y permita que el valor ingresado se
pueda anexar en esa posición.
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

void insertaPosicion(nodo* encabezado, int p, int elem){
    nodo* n = new nodo(elem);
    if (p == encabezado->data) {
        n->next = encabezado->next;
        encabezado->next = n;
        return;
    }
 
    nodo* temp = encabezado;
    while (temp->data != p) {
        temp = temp->next;
        if (temp == NULL) {
            return;
        }
    }
    n->next = temp->next;
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
    insertarInicio(encabezado, 1);
    insertarInicio(encabezado, 2);
    insertarInicio(encabezado, 3);
    insertarInicio(encabezado, 4);

    insertaPosicion(encabezado, 4, 6);

    std::cout << "Despues de la inserción\n";
    mostrar(encabezado);
    std::cout << std::endl;
    return 0;
}