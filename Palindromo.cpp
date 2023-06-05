/*Escribe un programa que verifique si una palabra ingresada por el usuario es un palíndromo*/

#include <iostream>
using namespace std;
    bool esPalindromo(const char* palabra) {
        int longitud =0;
        while (palabra[longitud] != '\0') {
        longitud++;
    }

    int i = 0;
    int j = longitud - 1;
    while (i < j) {
        if (palabra[i] != palabra[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}
        int main(){
            const int TAM_MAX = 100;
            char palabra[TAM_MAX];
            cout << "Por favor ingrese una palabra" <<endl;
            cin >> palabra;
            if (esPalindromo(palabra)){
                cout << "La palabra que usted ingreso es un palindromo." << endl;
                 } else {
                    cout << "La palabra que usted ingreso, no es un palindromo." << endl;

            }
            return 0;   
        }