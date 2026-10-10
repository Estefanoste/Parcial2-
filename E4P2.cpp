#include <iostream>
#include <iomanip> // para fixed y setprecision
using namespace std;

int main() {
    double ventas[100];   // usar double
    double suma = 0;

    for (int i = 0; i < 100; i++) {
        cout << "Venta del cliente " << (i + 1) << ": ";
        cin >> ventas[i];
        suma += ventas[i];
    }

    // Formato decimal normal con dos decimales
    cout << fixed << setprecision(2);
    cout << "\nLa suma total de ingresos es: " << suma << endl;

    return 0;
}
