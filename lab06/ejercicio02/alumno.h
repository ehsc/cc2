// alumno.h
#include "iostream"
using namespace std;

class Alumno{

private:
	int CUI;
	string nombre;
	int nota1;
	int nota2;
	int nota3;
public:
	Alumno(int, string, int, int, int);
	~Alumno();
	void datos();
	void aprobo();
};