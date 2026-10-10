#include <iostream>
using namespace std;

int main() {
    float alumnos[10][3] = { 0 }; // inicializar en 0

    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << (i + 1) << " Grupo A: ";
        cin >> alumnos[i][0];
        cout << "Alumno " << (i + 1) << " Grupo B: ";
        cin >> alumnos[i][1];

        // Guardar el mayor en la columna 3
        alumnos[i][2] = (alumnos[i][0] > alumnos[i][1]) ? alumnos[i][0] : alumnos[i][1];
    }

    cout << "\nResultados:" << endl;
    cout << "Alumno  GrupoA  GrupoB  Mejor" << endl;
    cout << "-------------------------------" << endl;
    for (int i = 0; i < 10; i++) {
        cout << (i + 1) << "       "
            << alumnos[i][0] << "       "
            << alumnos[i][1] << "       "
            << alumnos[i][2] << endl;
    }

    return 0;
}
