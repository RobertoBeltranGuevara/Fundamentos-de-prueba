#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool valido = true;

    if (a < 1 || a > 200) {
        cout << "El valor " << a << " no está dentro del rango permitido" << endl;
        valido = false;
    }

    if (b < 1 || b > 200) {
        cout << "El valor " << b << " no está dentro del rango permitido" << endl;
        valido = false;
    }

    if (c < 1 || c > 200) {
        cout << "El valor " << c << " no está dentro del rango permitido" << endl;
        valido = false;
    }

    if (!valido) {
        return 0; 
    }

    if (a >= b + c || b >= a + c || c >= a + b) {
        cout << "No es un Triángulo" << endl;
    } else {
        if (a == b && b == c) {
            cout << "Equilátero" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Isósceles" << endl;
        } else {
            cout << "Escaleno" << endl;
        }
    }

    return 0;
}
