#include <iostream>
using namespace std;

double inputCelsius() {
    double celsius;
    cout << "Ingrese una temperatura en grados Celsius: ";
    cin >> celsius;
    return celsius;
}

int inputChoice() {
    int choice;
    cout << "Seleccione una opción:" << endl;
    cout << "1. Convertir a Fahrenheit" << endl;
    cout << "2. Convertir a Kelvin" << endl;
    cin >> choice;
    return choice;
}

double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

void outputResult(int choice, double result) {
    if (choice == 1) {
        cout << "El resultado en grados Fahrenheit es: " << result << endl;
    } else if (choice == 2) {
        cout << "El resultado en grados Kelvin es: " << result << endl;
    }
}

int main() {
    double celsius = inputCelsius();
    int choice = inputChoice();
    double result;
    if (choice == 1) {
        result = celsiusToFahrenheit(celsius);
    } else if (choice == 2) {
        result = celsiusToKelvin(celsius);
    }
    outputResult(choice, result);
    return 0;
}

