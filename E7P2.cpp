#include <iostream>
using namespace std;


void intercambiarRef(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void intercambiarPtr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Valores iniciales:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

   
    intercambiarRef(x, y);
    cout << "\nDespués de intercambiar con referencias:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

  
    x = 30;
    y = 40;

    cout << "\nValores reiniciados:" << endl;
    cout << "x = " << x << ", y = " << y << endl;


    intercambiarPtr(&x, &y);
    cout << "\nDespués de intercambiar con punteros:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
