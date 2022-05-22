// persona.h
#include "iostream"
#include "string"
using namespace std;

class Persona{
private:
	string name;
	//Fecha actual
	int yearA;
	int monthA;
	int dayA;
	//Fecha de nacimiento
	int yearN;
	int monthN;
	int dayN;
public:
	Persona(string,int,int,int,int,int,int);
	~Persona();
	void datosPersona();
};