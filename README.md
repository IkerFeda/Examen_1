# Examen1
# Examen Programación

Bienvenido a mi Examen 

## Enlaces

- Repositorio en GitHub: (URL_DEL_REPOSITORIO)](https://github.com/IkerFeda/Examen_1.git)

## Ejercicio 1: Preguntas de Opciones Múltiples

## Ejercicio 1: Preguntas de Opciones Múltiples

1. C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?

    a. Orientación a objetos
    b. Tipado fuerte y estático
    c. Soporte a la programación de bajo nivel
    d. Todas las anteriores

   - Respuesta correcta: D. Todas las anteriores

2. Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?

    a. Un archivo que contiene código fuente C++
    b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación
    c. Un archivo que almacena las configuraciones del entorno de desarrollo
    d. Un archivo que guarda los resultados de las pruebas unitarias

   - Respuesta correcta: B. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación

3. En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?

   a. Variables que almacenan un valor específico
   b. Variables que almacenan la dirección de otra variable
   c. Funciones que apuntan a otras funciones
   d. Ninguna de las anteriores

   - Respuesta correcta: B. Variables que almacenan la dirección de otra variable
## Ejercicio 2: Programas en C++

Los programas en C++ se encuentran en la carpeta Programas_C++. Cada programa tiene su propio archivo y una breve descripción de lo que hace.

- Estudiantes.h: El programa mas importante de todos, en el estan incluidos todas las declaraciones y varias funciones con el objetivo de optimizar.
- Suma.cpp: programa que permite sumer 2 numeros
- GestionEstudiantes.cpp programa que permite manejar información de estudiantes como grado, nombre y edad
- Punteros.cpp: Enseña la implementacion de punteros para el intercambio de variables
- GestionPromedios.cpp: Permite gestionar los promedios de los estudiantes a traves de un vector el cual permite insertar las calificaciones y obtener el promedio.
- Gestionestudiantes-RegistrodeMaterias.cpp: cumple la misma funcion que GestionEstudiantes con la diferencia que permite eincribir materias a los estudiantes.
- ManejodeAusencias.cpp: permite controlar la asistencia a traves de la funcion mostrar_asistencia
- Gestionestudiantes-RegistrodeMaterias-Grados.cpp: Una nueva ampliacion que permite filtrar a los estudiantes por sus grados, ocupa un vector y la funcion filtrar_estudiantes para dicho proposito
- Gestionestudiantes-Excepciones.cpp: Una nueva extensión de la clase estudiante que permite el manejo de la excepcion "Materia ya Registrada"
- Profesor.h: Una version corta y simple de estudiantes.h, la diferencia es que ahora es con la clase profesor
- Profesores.cpp: Hace practicamente lo mismo que estudiantes.cpp con la diferencia que es con la clase profesor y sus propiedades

## Ejercicio 3: Preguntas de Desarrollo
## Diferencias entre Programación Orientada a Objetos y Programación Procedimental

A lo largo de su historia, la programación ha evolucionado adoptando diversos enfoques. La Programación Orientada a Objetos (POO) se fundamenta en la organización del código alrededor de entidades llamadas objetos, que integran tanto datos como funciones. Este enfoque fomenta la reutilización de código a través de clases y objetos, y facilita el concepto de herencia. Por el contrario, la Programación Procedimental (PP) se centra en procedimientos y funciones que operan directamente sobre los datos, sin enfocarse tanto en la estructura y la simplificación de los mismos, ni incorporar de manera inherente el concepto de herencia. La elección entre estos enfoques depende de los requerimientos específicos y las preferencias del programador.
Ademas C++ proporciona soporte para ambas metodologías al permitir la creación de clases y objetos, implementar herencia, y utilizar funciones y procedimientos. Además, facilita la manipulación de variables y tipos de datos. Esta versatilidad permite a los desarrolladores elegir el enfoque de programación que mejor se adapte a las necesidades específicas de cada proyecto.

## Comportamiento de las Excepciones en C++

Las excepciones en C++ tienen un comportamiento específico. La propagación de una excepción es el proceso mediante el cual una excepción en una parte del código a traves de las funciones try y throw se transmite en busca de un bloque `catch` adecuado. Si no se captura por ningún bloque `catch`, el programa se detiene en un error, lo que destaca la importancia de incluir bloques `catch` para manejar excepciones y evitar posibles errores en el código.

## Importancia de la Gestión de Recursos en C++

En el contexto de C++, la adquisición de recursos implica obtener y almacenar elementos del sistema, como archivos o memoria, para su posterior utilización en un programa. La gestión adecuada de estos recursos es fundamental para asegurar un uso eficiente y seguro de los mismos. Además, está estrechamente relacionada con la gestión de excepciones al capturar recursos, lo que garantiza su liberación en presencia de excepciones, mejorando así la seguridad y eficiencia del programa.




