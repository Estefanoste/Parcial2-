#include <iostream>
using namespace std;

int main() {

	float grupo1[5], grupo2[5], mejores[5];

	cout << "Ingresa los promedios del primer grupo: " << endl;
	for (int i = 0; i < 5; i++) {

		cout << "Alumno " << (i + 1) << ": ";
		cin >> grupo1[i];
	}



	cout << "Ingresa los promedios del segundo grupo: " << endl;
	for (int i = 0; i < 5; i++) {

		cout << "Alumno " << (i + 1) << ": ";
		cin >> grupo2[i];
	}


	for (int i = 0; i < 5; i++) {
		if (grupo1[i] > grupo2[i]) {
			mejores[i] = grupo1[i];

		}
		else {
			mejores[i] = grupo2[i];

		}

	}


	cout << "Promedios del grupo 1: ";

	for (int i = 0; i < 5; i++) {
		cout << grupo1[i] << " ";
	}

	cout << "Promedios del grupo 2: ";

	for (int i = 0; i < 5; i++) {
		cout << grupo2[i] << " ";
	}

	cout << "Los mejores promedios por posicion son :";

	for (int i = 0; i < 5; i++) {
		cout << mejores[i] << " ";
	}


	cout << endl;

	return 0;


}