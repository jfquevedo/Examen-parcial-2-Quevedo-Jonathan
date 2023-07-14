#include <iostream>
#include <string>

struct Alumno {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    Alumno alumnos[3];
    for (int i = 0; i < 3; i++) {
        std::cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        std::getline(std::cin, alumnos[i].nombre);
        std::cout << "Ingrese la edad del alumno " << i + 1 << ": ";
        std::cin >> alumnos[i].edad;
        std::cout << "Ingrese el promedio del alumno " << i + 1 << ": ";
        std::cin >> alumnos[i].promedio;
        std::cin.ignore();
    }
    int mejor = 0;
    for (int i = 1; i < 3; i++) {
        if (alumnos[i].promedio > alumnos[mejor].promedio) {
            mejor = i;
        }
    }
    std::cout << "El alumno con el mejor promedio es: " << std::endl;
    std::cout << "Nombre: " << alumnos[mejor].nombre << std::endl;
    std::cout << "Edad: " << alumnos[mejor].edad << std::endl;
    std::cout << "Promedio: " << alumnos[mejor].promedio << std::endl;
    return 0;
}

