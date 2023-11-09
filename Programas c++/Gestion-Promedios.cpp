#include "Estudiantes.h"

void Estudiantes::registrar_materia(std::string materia) {
    materias.push_back(materia);
}

void Estudiantes::registrar_calificacion(int calificacion) {
    calificaciones.push_back(calificacion);
}

void Estudiantes::mostrar_materias() {
    std::cout << "Materias registradas: " << std::endl;
    for (auto materia : materias) {
        std::cout << "- " << materia << std::endl;
    }
}

void Estudiantes::mostrar_info() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Grado: " << grado << std::endl;
}

float Estudiantes::calcular_promedio() {
    if (calificaciones.empty()) {
        return 0.0;
    }
    float sum = 0;
    for (auto calificacion : calificaciones) {
        sum += calificacion;
    }
    return sum / calificaciones.size();
}