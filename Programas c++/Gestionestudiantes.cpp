#include "Estudiantes.h"

int main() {
    Estudiantes estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 18;
    estudiante1.grado = "Sexto";

    estudiante1.mostrar_info();

    Estudiantes estudiante2;
    estudiante2.nombre = "Roberto";
    estudiante2.edad = 20;
    estudiante2.grado = "Tercero";
    estudiante2.mostrar_info();

    return 0;
}