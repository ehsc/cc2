/*
Defina una Pila que permita insertar elementos utilizando clases.
*/

#include <iostream>

class Nodo {
public:
    int dato;
    Nodo* next;
};

void insertar(Nodo*& pila, int n){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato = n;
    nuevoNodo -> next = pila;
    pila = nuevoNodo;
}
void mostrar(Nodo*& pila){
    std::cout << "Mostrando..." << "\n";
    Nodo* temp = pila;
 
    while (temp != NULL) {
        std::cout << temp -> dato << " -> ";
        temp = temp -> next;
    }
    std::cout << "NULL" << std::endl;
}
int main(){
    Nodo* pila = NULL;
    int dato;
    std::cout << "Ingrese un numero: ";
    std::cin >> dato;
    insertar(pila, dato);

    std::cout << "Ingrese un numero: ";
    std::cin >> dato;
    insertar(pila, dato);
    mostrar(pila);
}