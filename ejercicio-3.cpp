#include <iostream>
using namespace std;

void inputNumbers(int &a, int &b, int &c) {
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    cout << "Ingrese el tercer número: ";
    cin >> c;
}

void sortAscending(int &a, int &b, int &c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
}

void outputNumbers(int a, int b, int c) {
    cout << "Los números ordenados de forma ascendente son: " << a << ", " << b << ", " << c << endl;
}

int main() {
    int a, b, c;
    inputNumbers(a, b, c);
    sortAscending(a, b, c);
    outputNumbers(a, b, c);
    return 0;
}

