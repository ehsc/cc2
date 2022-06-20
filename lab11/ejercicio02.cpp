/*
Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Pila.
*/

#include <iostream>

class Nodo {
public:
    int dato;
    Nodo* next;
};

void insertar(Nodo*& pila, int n){
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo -> dato = n;
    nuevoNodo -> next = pila;
    pila = nuevoNodo;
}

void eliminar(Nodo*& pila, int& n){
    Nodo* aux = pila;
    n = aux -> dato;
    pila = aux -> next;
    delete aux;
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

    std::cout << "Sacando elementos... ";
    while(pila != NULL){
        eliminar(pila, dato);
        if(pila != NULL){
            std::cout << dato << " -> ";
        }else{
            std::cout << dato << std::endl;
        }
    }
    mostrar(pila);
    return 0;
}