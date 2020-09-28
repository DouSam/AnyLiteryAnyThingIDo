#include <iostream>

using namespace std;

int main()
{
    int idade;
    double quantidadeIdades, somaIdades;
    double media = 0;

    idade = 1;

    while (idade != 0)
    {
        cout << "Digite a idade ou 0 para parar" << endl;
        cin >> idade;
        if (idade == 0)
        {
            break;
        }
        else
        {
            somaIdades += idade;
            quantidadeIdades += 1;
        };
    }

    media = somaIdades / quantidadeIdades;

    cout << "Media das idades: " << media;

    return 0;
}
