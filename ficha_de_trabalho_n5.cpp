#include <iostream>
#define N 13
using namespace std;

int main() {

    float valores[N] = {4, -11, 3.3, -0.1, 1.42, 5.3, 12, 0.4, -1.02, 9, -3.4, 0.5, -2.09};
    float multiplicacao = 1;
    for(int i = 0; i < N; i++) {

    multiplicacao *= valores[i];
    }

    cout << multiplicacao;
    return 0;
}
