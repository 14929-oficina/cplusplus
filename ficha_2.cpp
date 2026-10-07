#include <iostream>

using namespace std;

int main () {

    int opcao, i ;

    for (int i=0; i>=0; i++) {
    cout << " opcao 0 \n";
    cout << " opcao 1 \n";
    cout << " opcao 2 \n";
    cout << " opcao 3 \n";
    cout << "opcao: ";


    cin >> opcao;

    switch (opcao)
    {
        case 0:
            cout << "sair do programa";
            break;

        case 1:
            cout << "e bom programador";
            break;
        case 2:
            cout << "e muito bom programador";
            break;
        case 3:
            cout << "e um excelente programador";
            break;

        default:
            cout << "nao sei oque tas a pedir";
            break;
    }

            if (opcao == 0) break;






}

}
