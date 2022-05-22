/*
Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.
*/

#include <iostream>

void cambio(int* num1, int* num2){
	int aux;

	aux = *num1;
	*num1 = *num2;
	*num2 = aux;

}
int main(){

	int a = 1;
	int b = 2;
	
	std::cout<<"Sin cambio:\n";
	std::cout<<"a: "<<a<<"\nb: "<<b<<"\n";

	cambio(&a,&b);
	std::cout<<"Aplicando cambio:\n";
	std::cout<<"a: "<<a<<"\nb: "<<b<<"\n";
}

