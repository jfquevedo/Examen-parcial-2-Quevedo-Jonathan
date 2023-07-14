#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    const char *filename = "emails.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        cout << "No se pudo crear el archivo " << filename << endl;
        return 1;
    }
    const char *emails[] = {"amigo1@example.com", "amigo2@example.com", "amigo3@example.com"};
    int numEmails = sizeof(emails) / sizeof(emails[0]);
    for (int i = 0; i < numEmails; i++) {
        fprintf(file, "%s\n", emails[i]);
    }
    fclose(file);
    cout << "Los correos electrónicos se han guardado en el archivo " << filename << endl;
    return 0;
}

