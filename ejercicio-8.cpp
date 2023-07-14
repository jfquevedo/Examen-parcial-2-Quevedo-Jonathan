#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string email;
    std::ofstream file("contactos.txt", std::ios::app);
    if (!file.is_open()) {
        std::cerr << "No se pudo abrir el archivo" << std::endl;
        return 1;
    }
    while (true) {
        std::cout << "Ingrese un correo electrónico (o 'salir' para terminar): ";
        std::getline(std::cin, email);
        if (email == "salir") break;
        file << email << std::endl;
    }
    file.close();
    return 0;
}

