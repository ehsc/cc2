/*
5. Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
la información a recoger será: nombre del producto, precio, cantidad en stock. La
tienda dispone de 10 productos distintos. El programa debe ser capaz de:
a. Dar de alta un producto nuevo.
b. Buscar un producto por su nombre.
c. Modificar el stock y precio de un producto dado.
*/


#include <iostream>

int main(){
	std::string productos[10];
	int precios [10];
	int stock [10];
    int opcion;
    bool repetir = true;
    int contador=0;
    std::string productoBuscado;
    
    std::cout << "\nTIENDA DE ABARROTES\n";

    do {
              
        std::cout << "\n\nMenu de Opciones" << std::endl;
        std::cout << "1. Añadir producto nuevo" << std::endl;
        std::cout << "2. Buscar producto" << std::endl;
        std::cout << "3. Modificar el stock y precio de un producto" << std::endl;
        std::cout << "0. SALIR" << std::endl;
        
        std::cout << "\nIngrese una opcion: ";
        std::cin >> opcion;
        
        switch (opcion) {
            case 1:
                         
                if(contador < 10){
                	std::cout << "\nNombre del producto: "; std::cin >> productos[contador];
                	std::cout << "Precio del producto: "; std::cin >> precios[contador];
                	std::cout << "Stock del producto: "; std::cin >> stock[contador];
                	std::cout << "Producto añadido!";
                	contador++;
                }else{
                	std::cout << "\nInventario lleno! No se permite ingresar mas productos.\n";
                }
                
                break;
                
            case 2:
                                                
                std::cout << "\nProducto a buscar: "; std::cin >> productoBuscado;
                for(int i=0; i<10; i++){
                	if(productoBuscado == productos[i]){
                		std::cout << "Producto encontrado!\n";
                		std::cout << "Nombre: " << productos[i];
                		std::cout << "\nPrecio: " << precios[i];
                		std::cout << "\nStock: " << stock[i];
                	}
                }
               
                std::cout<<"\nBusqueda terminada!";                
                break;
                
            case 3:
                            
                std::cout << "Producto a modificar: "; std::cin >> productoBuscado;
                for(int i=0; i<10; i++){
                	if(productoBuscado == productos[i]){
                		std::cout << "Encontrado!\n";
                		std::cout << "Producto a modificar: " << productos[i];
                		std::cout << "\nIngrese nuevo precio: "; std::cin >> precios[i];
                		std::cout << "Ingrese nuevo stock: "; std::cin >> stock[i];
                	}
                }
                   
                break;
                
            case 0:
            	repetir = false;
            	break;
            
            default:
            	std::cout << "\n\nOpción no valida! Ingrese otra\n";
               	break;
        }        
    } while (repetir);
	 
   // return 0;
}
