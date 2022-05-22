// rectangulo.h

#include <iostream>
using namespace std;

class Rectangulo
{
// Atributos: caracteristicas del carro
private:

	int lmenor;
	int lmayor;
// Metodos: Acciones que realiza la clase
public:
	Rectangulo(int, int);
// Constructor
	~Rectangulo();
// Destructor
	void perimetro();
	void area();
};