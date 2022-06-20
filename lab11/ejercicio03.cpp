/*
Implemente un algoritmo para buscar elementos de la Pila.
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
void mostrar(Nodo*& pila){
    std::cout << "Mostrando..." << "\n";
    Nodo* temp = pila;
 
    while (temp != NULL) {
        std::cout << temp -> dato << " -> ";
        temp = temp -> next;
    }
    std::cout << "NULL" << std::endl;
}
void buscar(Nodo*& pila){
    Nodo* temp = pila;
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
    Nodo* pila = NULL;
    int dato;
    std::cout << "Ingrese un numero: ";
    std::cin >> dato;
    insertar(pila, dato);

    std::cout << "Ingrese un numero: ";
    std::cin >> dato;
    insertar(pila, dato);
    mostrar(pila);
    buscar(pila);
}