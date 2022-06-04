/*Crear una clase Persona del cual tendrá métodos asignar una edad y nombre. Una
segunda clase, alumno, tendrá que heredar este contenido y a través de esta clase
poder asignar los datos de edad y nombre de los estudiantes.
*/
#include <iostream>

class Persona{

protected:

	int edad;
	std::string nombre;

public:

	void asignarNombre();
	void asignarEdad();
};

class Alumno : public Persona{
public:
	void asignar();
};

void Persona::asignarNombre(){
	std::cout << "Ingrese su nombre: ";
	std::cin >> nombre;
}

void Persona::asignarEdad(/* arguments */) {
	std::cout << "Ingrese su edad: ";
	std::cin >> edad;
}


void Alumno::asignar(){
	std::cout << "Nombre: " << nombre;
	std::cout << "\nEdad: " << edad << "\n";
}
int main(){
	Alumno alum;
	alum.asignarNombre();
	alum.asignarEdad();
	alum.asignar();
	return 0;
}
