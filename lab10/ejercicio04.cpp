/*
Elabore una función que permita eliminar el último elemento de una lista enlazada.
(Evite copiar los elementos en una nueva lista para completar la eliminación del
elemento )
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


void eliminarUltimo(nodo* encabezado){
   nodo*prev= NULL;
   nodo*temp= encabezado;
   while(temp->next!=NULL){
      prev= temp;
      temp=temp->next;
   }
   delete temp;
   prev->next= NULL;
   return;
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
    
    eliminarUltimo(encabezado);
    std::cout << "Despues de la eliminación\n";
    mostrar(encabezado); 
    std::cout << std::endl;
    return 0;
}