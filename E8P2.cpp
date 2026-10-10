#include <iostream>
using namespace std;

int main() {
    int arreglo[5]; 

    for (int i = 0; i < 5; i++) {
        arreglo[i] = i * 10; 
    }

  
    for (int i = 0; i < 5; i++) {
        cout << "arreglo[" << i << "] = " << arreglo[i] << endl;
    }

    return 0;
}
