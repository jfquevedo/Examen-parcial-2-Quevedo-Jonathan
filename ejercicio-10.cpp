#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string palabra, invertida;
    std::cout << "Ingrese una palabra: ";
    std::getline(std::cin, palabra);
    invertida = palabra;
    std::reverse(invertida.begin(), invertida.end());
    std::cout << "La palabra invertida es: " << invertida << std::endl;
    if (palabra == invertida) {
        std::cout << "La palabra es capicúa" << std::endl;
    } else {
        std::cout << "La palabra no es capicúa" << std::endl;
    }
    return 0;
}

