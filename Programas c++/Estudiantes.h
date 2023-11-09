
#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

#include <iostream>
#include <string>
#include <vector>

class Estudiantes {
public:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;
    std::vector<int> calificaciones;

    void registrar_materia(std::string materia);
    void registrar_calificacion(int calificacion);
    void mostrar_materias();
    void mostrar_info();
    float calcular_promedio();
};

#endif
