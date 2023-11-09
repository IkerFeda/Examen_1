#include "profesor.h"

Profesor::Profesor(std::string nombre, int edad, std::string materia, int anos_experiencia) {
    this->nombre = nombre;
    this->edad = edad;
    this->materia = materia;
    this->anos_experiencia = anos_experiencia;
}

void Profesor::mostrar_info_profesor() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Materia: " << materia << std::endl;
    std::cout << "Años de experiencia: " << anos_experiencia << std::endl;
}
