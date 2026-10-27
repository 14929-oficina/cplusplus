#include <iostream>
#include <time.h>

using namespace std;

time_t now = time(NULL);
struct tm *t = localtime(&now);

void menu(){

    cout << "1- ano atual:\n";
    cout << "2- sair do programa:\n";
    cout << "escolha: ";

}

int getYear() { return (t ->tm_year + 1900); }
int getMonth() { return (t ->tm_mon + 1); }
int getDay() { return (t ->tm_mday); }

int aMinhaIdade(int ano=2011, int mes=8, int dia=24) {
    int aux = getYear() - ano;

    if (getMonth() < mes) {
        aux --;
    } else {
        if (getDay() < dia && getMonth() == mes) {

        }
    }
    return aux;
}

int main ()
{
    int ano, op;

    cout << "a minha idade = " << aMinhaIdade(2011, 8, 24) << " anos\n";

    do {
        menu();
        cin >> op;

        if (op == 1) {
            ano = getYear();
            cout << ano;
            cout << "\n";
        }
    } while (op != 2);


   return 0;
}
