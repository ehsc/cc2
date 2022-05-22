/*
Implemente un programa con clases que calcule el área de un rectángulo y
perímetro.
*/
// ejercicio1.cpp
#include "rectangulo.h"
#include "iostream"

Rectangulo::Rectangulo(int _lmayor,int _lmenor){
	lmayor = _lmayor;
	lmenor = _lmenor;
}
Rectangulo::~Rectangulo(){
}
void Rectangulo::perimetro() {
	cout << "Perimetro: " << (lmayor*2)+(lmenor*2) << endl;
}
void Rectangulo::area() {
	cout << "Area: " << lmayor * lmenor << endl;
}
int main(){
	Rectangulo x = Rectangulo(20,40);
	x.perimetro();
	x.area();
	return 0;
}