/*
2. Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto
deberá de asignar memoria a cada vector. Calcule el producto punto de vectores y
muestre por pantalla. Una vez finalizado este proceso, retire la memoria asignada a
los punteros. Repita este proceso de asignación y retiro de memoria dentro de un for
de 1 000 000 veces.
*/

#include <iostream>
#include <random>
#include <ctime>




int main(){
	int size;
	std::cout << "Ingrese el tamaño de los arreglos: ";
	std::cin >> size;
	int low = 1;
    int high = 10;
    
    srand(time(NULL));
 
    for(int i = 0; i < 1000000; i++){
    	std::cout << "--------------" << i + 1 << "--------------\n";
    	float productoPunto = 0;
    	float* vector1 = new float [size];
		float* vector2 = new float [size];
	    
	    //Llenando los arreglos con numeros aleatorios	

	    for (int i = 0; i < size; i++) {
	        float r = low + static_cast<float>(rand()) * static_cast<float>(high - low) / RAND_MAX;
	        vector1[i] = r;
	    }

	    for (int i = 0; i < size; i++) {
	        float r = low + static_cast<float>(rand()) * static_cast<float>(high - low) / RAND_MAX;	     
	        vector2[i] = r;
	    }
	 	
	 	//Producto punto

	 	for(int i = 0; i < size; i++){
	 		productoPunto += vector1[i]*vector2[i];
	 	}

	 	//Mostrando los arreglos generados
	 	std::cout << "\nVector 1: \n";
		for(int i = 0; i < size; i++){
			std::cout << *(vector1+i)<<"  ";
		}
		std::cout<< "\nVector 2: \n";
		for(int i = 0; i < size; i++){
			std::cout << *(vector2+i)<<" ";
		}
		std::cout << std::endl;

		//Mostrando producto punto en pantalla
		std::cout << "Producto punto: " << productoPunto << std::endl;

		delete[] vector1;
		delete[] vector2;
	    }
	

}

