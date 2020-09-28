#include <iostream>

using namespace std;

int main()
{

    int vetor[10];
    int pares = 0;
    //Para cada posição eu irei pedir um valor para o usuário
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite um valor para posição " << i << endl;
        cin >> vetor[i];
    };

    //Para cada posição irei analisar se essa é par e apenas exibir caso seja.

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            cout << "Elemento " << i << " é par" << endl;
            cout << "Valor: " << vetor[i] << endl;
            //Somando caso seja par.
            pares++;
        };
    };

    cout << "Total de elementos pares: " << pares;

    return 0;
}