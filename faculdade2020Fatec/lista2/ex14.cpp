#include <iostream>

using namespace std;

int main()
{

    int vetorOriginal[10] = {0};
    int vetorEspelho[10] = {0};
    int posicaoPreenchida = 0;
    //Percorrer o vetor pedindo um número.

    for (int i = 0; i < 10; i++)
    {
        int nDigitado;
        cout << "Insira o elemento " << i + 1<< endl;
        cin >> nDigitado;

        //Caso o número indicado já exista no vetor, irei adicionar ele ao vetor espelho.

        for (int i = 0; i < 10; i++)
        {
            if (vetorOriginal[i] == nDigitado)
            {
                for (int i = 0; i <= posicaoPreenchida; i++)
                {
                    if (vetorEspelho[i] == nDigitado)
                    {
                        break;
                    }
                    else
                    {
                        vetorEspelho[posicaoPreenchida] = nDigitado;
                        posicaoPreenchida++;
                        break;
                    };
                };
            };
        };
        vetorOriginal[i] = nDigitado;
    };

    //Listando todos os valores do vetor espelho.
    cout << "Numeros repetidos: " << endl;
    for (int i = 0; i < posicaoPreenchida; i++)
    {
        cout << vetorEspelho[i] << endl;
    };

    return 0;
}