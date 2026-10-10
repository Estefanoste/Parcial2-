#include <iostream>
#include <string>
#include <cctype> // para isdigit
using namespace std;

int main() {
    string nombreCompleto;
    string nombre, apellido;

    cout << "Ingresa tu nombre completo (nombre y apellido): ";
    getline(cin, nombreCompleto);

    // Buscar el espacio que separa nombre y apellido
    int espacio = nombreCompleto.find(' ');
    if (espacio == string::npos) {
        cout << "Error: debes ingresar nombre y apellido separados por un espacio." << endl;
        return 0;
    }

    // Separar en dos variables
    nombre = nombreCompleto.substr(0, espacio);
    apellido = nombreCompleto.substr(espacio + 1);

    // Validar que no contengan números
    bool nombreValido = true, apellidoValido = true;
    for (char c : nombre) {
        if (isdigit(c)) nombreValido = false;
    }
    for (char c : apellido) {
        if (isdigit(c)) apellidoValido = false;
    }

    if (!nombreValido || !apellidoValido) {
        cout << "Error: el nombre o apellido contiene numeros." << endl;
    }
    else {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
    }

    return 0;
}


