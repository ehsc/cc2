/*
Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI,
nombre completo y tres notas parciales (nota1, nota2, nota3). El programa con
clases debe imprimir: CUI, el primer nombre, el promedio de las tres notas e
indique con un mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó
(nota final < 10.5) la asignatura de Ciencias de la Computación II.
*/
// ejercicio2.cpp
#include "alumno.h"
#include "iostream"

Alumno::Alumno(int _CUI, string _nombre, int _nota1, int _nota2, int _nota3){
	CUI = _CUI;
	nombre = _nombre;
	nota1 = _nota1;
	nota2 = _nota2;
	nota3 = _nota3;
}

Alumno::~Alumno(){
}

void Alumno::datos(){
	cout << "\nNombre: " << nombre << "\nCUI: " << CUI << "\nNota 1: " << nota1<< "\nNota 2: " << nota2 << "\nNota 3: " << nota3 << endl;
}
void Alumno::aprobo(){
	float notaFinal = (nota1 + nota2 + nota3)/3;
	if(notaFinal >= 10.5){
		cout << nombre << " Aprobó!\n";
	}else if(notaFinal < 10.5){
		cout << nombre << " No aprobó!\n";
	}
}

int main(){
	Alumno a1 = Alumno(20173778, "Edward", 15, 13, 14);
	a1.datos();
	a1.aprobo();
	
	return 0;
}