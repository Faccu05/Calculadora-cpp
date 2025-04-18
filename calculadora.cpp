#include <iostream> 
using namespace std;

int main() {
    char opcion;
    float num1, num2;

    cout << "=== CALCULADORA ===" << endl;
    cout << "1. Suma " << endl;
    cout << "2. Resta " << endl;
    cout << "3. Multiplicacion " << endl;
    cout << "4. Division " << endl;
    cout << "5. Salir" << endl;
    
    cout << "Elige una opcion (1-5): ";
    cin >> opcion;

    if (opcion != '5') {
        cout << "Ingresa el primer numero: ";
        cin >> num1;
        cout << "Ingresa el segundo numero: ";
        cin >> num2;
    }

    switch (opcion) {
        case '1':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '2':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '3':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '4':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "¡Error! No se puede dividir por cero." << endl;
            }
            break;
        case '5':
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion invalida." << endl;
    }
    return 0;
}