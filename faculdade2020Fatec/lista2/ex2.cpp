#include <iostream>

using namespace std;

int main()
{
    // declarando array/vetor
    int A[6];

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    //Somando elementos de uma array.

    int soma = A[0] + A[1] + A[5];

    //Exibindo a soma.

    cout << "A soma das posições 0 1 e 5 é: " << soma << endl;

    //Atribuindo valor para uma posição.

    A[4] = 100;

    //Para cada posição, será impresso o valor que está nela.

    for (int i = 0; i < 6; i++)
    {
        cout << "Posicao " << i << " Tem valor: " << A[i] << endl;
    };

    return 0;
}