#include <iostream>

using namespace std;


int main() {

	float CALIFICACIONES[6];
	float SUMA = 0;

	for (int i = 0; i < 5; i++) {

		cout << "Ingresa la calificacion " << (i + 1) << ": ";

		cin >> CALIFICACIONES[i];

			SUMA += CALIFICACIONES[i];

	}



	CALIFICACIONES[5] = SUMA / 5;



	cout << "Calificaciones ingresadas: " << endl;

	for (int i = 0; i < 5; i++) {

		cout << "Calificacion" << (i + 1) << ": " << CALIFICACIONES[i] << endl;
	}

	cout << "Promedio: " << CALIFICACIONES[5] << endl;

	return 0;




}