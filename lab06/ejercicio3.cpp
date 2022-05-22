/*
Implemente un programa con clases que lea la fecha de nacimiento y la fecha
de hoy y muestre por pantalla el nombre y la edad de la persona.
*/
// ejercicio3.cpp
#include "persona.h"
#include <iostream>
#include <string>

Persona::Persona(string _name, int _yearA, int _monthA, int _dayA, int _yearN, int
_monthN, int _dayN){
	name = _name;

	yearA = _yearA;
	monthA = _monthA;
	dayA = _dayA;
	
	yearN = _yearN;
	monthN = _monthN;
	dayN = _dayN;
}

Persona::~Persona(){
}

void Persona::datosPersona(){
	int dayRpta, monthRpta;
	if(dayA < dayN){
		dayA = dayA + 30;
		monthA = monthA -1;
		dayRpta = dayA - dayN;
	}else{
		dayRpta = dayA - dayN;
	}
	if(monthA < monthN){
		monthA = monthA + 12;
		yearA = yearA - 1;
		monthRpta = monthA - monthN;
	}else{
		monthRpta = monthA - monthN;
	}
	cout <<"\nNombre: " << name << "\nTiene " << yearA - yearN << " años, " << monthRpta << " meses y " << dayRpta << " dias\n";
}

int main(){
	string nombre;
	int anioA, mesA, diaA, anioN, mesN, diaN;

	cout << "Ingrese su nombre: ";
	cin >> nombre;
	
	cout << "Año actual: ";
	cin >> anioA;
	
	cout << "Mes actual: ";
	cin >> mesA;
	
	cout << "Dia actual: ";
	cin >> diaA;
	
	cout << "Año de nacimiento: ";
	cin >> anioN;
	
	cout << "Mes de nacimiento: ";
	cin >> mesN;
	
	cout << "Dia de nacimiento: ";
	cin >> diaN;
	
	Persona p = Persona(nombre, anioA, mesA, diaA, anioN, mesN, diaN);
	p.datosPersona();
	return 0;
}