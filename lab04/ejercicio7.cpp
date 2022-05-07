/*
Escribe un programa, que trabajando mediante funciones, presente un menú al
usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las filas para
arriba o para abajo.
*/

#include <iostream>

int main(){
	
	int matriz[3][3];
	int opcion;
	bool repetir = true; 

	std::cout <<"Ingrese datos a la matriz!\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			std::cout << "Fila [" << i+1 << "] Columna[" << j+1 << "]: ";
			std::cin >> matriz[i][j];
		}		
	}
	

    do {
              
        std::cout << "\n\nMenu de Opciones" << std::endl;
        std::cout << "1. Mostrar matriz" << std::endl;
        std::cout << "2. Mover columnas a la derecha" << std::endl;
        std::cout << "3. Mover columnas a la izquierda" << std::endl;
        std::cout << "4. Mover filas para arriba" << std::endl;
        std::cout << "5. Mover filas para abajo" << std::endl;
        std::cout << "0. SALIR" << std::endl;
        
        std::cout << "\nIngrese una opcion: ";
        std::cin >> opcion;
        
        switch (opcion) {
            case 1:
                         
                std::cout << "\nMostrando matriz...\n\n";
                for(int row = 0; row < 3; row++){
                	for(int col = 0; col < 3; col++){
                		std::cout << matriz[row][col] << " ";

						if(matriz[row][col] < 100){
							std::cout << " ";
							if(matriz[row][col] < 10)
								std::cout << " ";
						}
                	}
                	std::cout<<std::endl;
                }
                
                break;
                
            case 2:
                                                
                //Mover columnas a la derecha
            
				for (int row = 0; row < 3; row++) {
				   int tmp = matriz[row][2];
				   for (int col = 2; col > 0; col--)  {
				       matriz[row][col] = matriz[row][col-1];
				   }
				   matriz[row][0] = tmp;
				}
                std::cout << "\nLas columnas han sido desplazadas a la derecha\n";
                break;
                
            case 3:
                            
                //Mover columnas a la izquierda

				for (int row = 0; row < 3; row++) {
				   int tmp = matriz[row][0];
				   for (int col = 1; col < 3; col++) {
				       matriz[row][col-1] = matriz[row][col];
				   }
				   matriz[row][2] = tmp;
				}                   
                std::cout << "\nLas columnas han sido desplazadas a la izquierda\n";
                break;

            case 4:
                            
                //Mover filas para arriba

            	for (int col = 0; col < 3; col++) {
				   int tmp = matriz[0][col];
				   for (int row = 0; row < 2; row++) {
				       matriz[row][col] = matriz[row+1][col];
				   }
				   matriz[2][col] = tmp;
				} 
                std::cout << "\nLas filas han sido desplazadas hacia arriba\n";
                break;

            case 5:
                            
                //Mover filas para abajo

            	for (int col = 0; col < 3; col++) {
				   int tmp = matriz[2][col];
				   for (int row = 2; row > 0; row--) {
				       matriz[row][col] = matriz[row-1][col];
				   }
				   matriz[0][col] = tmp;
				}             
				std::cout << "\nLas filas han sido desplazadas hacia abajo\n";				                   
                break;
                
            case 0:
            	repetir = false;
            	break;
            
            default:
            	std::cout << "\n\nOpción no valida! Ingrese otra\n";
               	break;
        }        
    } while (repetir);
	 
}
