/*Escribe un programa que reciba como entrada un número entero y determine si es primo o no.*/

#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << "El numero es primo." << endl;
    } else {
        cout << "El numero no es primo." << endl;
    }

    return 0;
}

