// matriz.h

#include <iostream>
using namespace std;

class Matriz{
private:
	int matrizSize;
	int numeroBuscado;
public:
	Matriz(int, int);
	~Matriz();
	
	void buscarEnMatriz();
};