/*
7. Calcula el promedio de 3 notas para n estudiantes.
*/

#include <iostream>

int main(){

	int n;
	std::cout << "Ingrese el numero de estudiantes: ";
	std::cin >> n;

	int matriz[n][3];
	suma = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			std::cout << "Nota N° " << j+1 << " para estudiante N° " << i+1 <<": ";
			std::cin >> matriz[i][j];
			
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			//std::cout << "Nota para estudiante " << i+1;
			std::cout << matriz[i][j] << std::endl;
		}
	}

}