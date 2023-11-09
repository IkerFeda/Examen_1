#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <iostream>

class Profesor {
public:
    std::string nombre;
    int edad;
    std::string materia;
    int anos_experiencia;

public:

    Profesor(std::string nombre, int edad, std::string materia, int anos_experiencia);


    void mostrar_info_profesor();
};

#endif