#include <iostream>
#include <string.h>

using namespace std;

int main ()
{

    char nome[31];
    printf("Nome: ");


    //scanf("%30s", nome);

    cin.getline(nome, 31);

    //printf("\nOla, %s!\n", nome);

    //printf("\nOla, %s!\n", nome[0]);
    cout << "\nOla, " << nome[0] << "";


   return 0;
}
