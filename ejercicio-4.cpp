#include <iostream>
using namespace std;

void inputNumber(int &n) {
    cout << "Ingrese un número: ";
    cin >> n;
}

void outputMultiplicationTable(int n) {
    cout << "Tabla de multiplicar del " << n << " hasta el 20:" << endl;
    for (int i = 1; i <= 20; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int n;
    inputNumber(n);
    outputMultiplicationTable(n);
    return 0;
}

