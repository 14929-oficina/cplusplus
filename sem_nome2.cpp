#include <iostream>

using namespace std;

int main() {
    int N=1;
    int numero[N];
    int soma = 0;
    int quantNumeros;

    cout << "diz me quantos numeros queres somar: ";
    cin >> quantNumeros;

    for(int i = 0; i < N; i++) {
        cout << "diz me " << N << " numeros inteiros: \n";
        cin >> numero[N];

        soma = numero[N] * quantNumeros;
    }

        cout << "a soma destes valores da: " << soma;





    return 0;
}
