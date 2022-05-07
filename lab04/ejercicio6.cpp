/*
Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.
*/

#include <iostream>
int filaMayorSuma(int a,int b,int c){
    int n;
    if(a > b)
        if(a > c)
            n = a;
        else
            n = c;
    else
        if(b > c)
            n = b;
        else
            n = c;
    return n;
}
int main(){

	int matriz[3][3];
	int sumaFila1 = 0;
	int sumaFila2 = 0;
	int sumaFila3 = 0;

	std::cout<<"Ingrese los numeros para:\n";
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 3; j ++){
			std::cout << "Fila [" << i+1 << "] Columna [" << j+1 << "]: ";
			std::cin >> matriz[i][j];
		}
	}

	std::cout << "Mostrando matriz ingresada\n";

	for(int i = 0; i < 3; i ++){

		for(int j = 0; j < 3; j ++){

			std::cout << matriz[i][j] << " ";

			if(matriz[i][j] < 100){
				std::cout << " ";
				if(matriz[i][j] < 10)
					std::cout << " ";
			}
			if(i==0){
				sumaFila1 += matriz[i][j];
			}else if(i==1){
				sumaFila2 += matriz[i][j];
			}else if(i==2){
				sumaFila3 += matriz[i][j];
			}

		}

		if(i==0){
				std::cout << " <- Suma de fila es: " << sumaFila1;
		}else if(i==1){
				std::cout << " <- Suma de fila es: " << sumaFila2;
		}else if(i==2){
				std::cout << " <- Suma de fila es: " << sumaFila3;
		}
		
		std::cout<<std::endl;
	}

	if(filaMayorSuma(sumaFila1,sumaFila2,sumaFila3) == sumaFila1){

		std::cout << " La fila con mayor suma es fila 1 " << std::endl;	
	}else if(filaMayorSuma(sumaFila1,sumaFila2,sumaFila3) == sumaFila2){

		std::cout << " La fila con mayor suma es fila 2 " << std::endl;	
	}else if(filaMayorSuma(sumaFila1,sumaFila2,sumaFila3) == sumaFila3){

		std::cout << " La fila con mayor suma es fila 3 " << std::endl;	
	}

}