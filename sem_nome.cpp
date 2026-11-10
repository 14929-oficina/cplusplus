#include <iostream>

using namespace std;

int main() {
    int N=10;
    int numero[N];
    int soma = 0;

    for(int i = 0; i < 10;i++) {
        cout << "diz me 10 numeros inteiros: \n";
        cin >> numero[N];

        soma = soma + numero[N] * numero[N];
    }

        cout << "a soma destes 10 valores da: " << soma;





    return 0;
}
