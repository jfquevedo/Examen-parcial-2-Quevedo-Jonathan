#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    const char *filename = "archivo.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        cout << "El archivo " << filename << " no existe." << endl;
    } else {
        cout << "El archivo " << filename << " existe." << endl;
        fclose(file);
    }
    return 0;
}


