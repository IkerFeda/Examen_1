#include "Estudiantes.h"

void RegistroAsistencia::mostrar_asistencia() {
    std::cout << "Fecha de la clase: " << fecha << std::endl;
    std::cout << "Estado de asistencia: " << estado << std::endl;
}

void Estudiantes::registrar_materia(std::string materia) {
    for (const auto& mat : materias) {
        if (mat == materia) {
            throw MateriaYaRegistradaException();
        }
    }
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

std::vector<Estudiantes> Estudiantes::filtrar_estudiantes(const std::vector<Estudiantes>& lista_estudiantes, const std::string& grado) {
    std::vector<Estudiantes> estudiantes_filtrados;
    for (const auto& estudiante : lista_estudiantes) {
        if (estudiante.grado == grado) {
            estudiantes_filtrados.push_back(estudiante);
        }
    }
    return estudiantes_filtrados;
}

int main() {
    Estudiantes estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 18;
    estudiante1.grado = "Sexto";

    try {
        estudiante1.registrar_materia("Matemáticas");
        estudiante1.registrar_materia("Ciencias");
        estudiante1.registrar_materia("Matemáticas"); 
    } catch (MateriaYaRegistradaException &e) {
        std::cout << "Excepción atrapada: " << e.what() << std::endl;
    }

    estudiante1.mostrar_info();
    estudiante1.mostrar_materias();

    return 0;
}