#include <iostream>
#include <string.h>

using namespace std;

void menu(){

    cout << "1- ano atual:\n";
    cout << "2- sair do programa:\n";
    cout << "escolha: ";

}

int getYear() {
    return 2026;
}

int main ()
{
    int ano, op;

    menu();
    cin >> op;

    ano = getYear();
    cout << ano;
    cout << "\n";


   return 0;
}
