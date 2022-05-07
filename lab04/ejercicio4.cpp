/*
Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.
*/

#include <iostream>
#include <vector>

int main(){
    std::vector<int> primos;

	for (int i = 2; i < 100; i ++){
        int contador = 0;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                contador++;
            }
        }
        if(contador < 1){
            primos.push_back(i);
        }
    }

    for(int k = primos.size()-1; k >= 0; k--){
        std::cout<<primos[k]<<" ";
    }
    std::cout << "\n";
}