#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int numerador, denominador, resultado;

    cout << "Ingrese el Numerador: ";
    cin >> numerador

    cout << "Ingrese el Denominador: ";
    cin >> denominador

    try {
        if (denominador == 0) {
            throw runtime_error("No se puede dividir por cero");
        }

        resultado = numerador / denominador

        cout << "El resultado de la division es: " << resultado << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
