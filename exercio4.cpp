#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicita ao usuário digitar um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Verifica se o número é positivo ou negativo e mostra na mesma linha
    cout << numero << " e um numero ";
    if (numero >= 0) {
        cout << "positivo." << endl;
    } else {
        cout << "negativo." << endl;
    }

    return 0;
}