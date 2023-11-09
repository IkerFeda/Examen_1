#include "Estudiantes.h"


int main() {
    Estudiantes estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 18;
    estudiante1.grado = "Sexto";
    estudiante1.registrar_materia("Matemáticas");
    estudiante1.registrar_materia("Ciencias");
    estudiante1.mostrar_info();
    estudiante1.mostrar_materias();

    Estudiantes estudiante2;
    estudiante2.nombre = "Roberto";
    estudiante2.edad = 20;
    estudiante2.grado = "Tercero";
    estudiante2.registrar_materia("Historia");
    estudiante2.mostrar_info();
    estudiante2.mostrar_materias();

    return 0;
}

