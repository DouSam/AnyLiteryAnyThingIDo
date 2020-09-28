#include <iostream>

using namespace std;

int main()
{
    int nums[20] = {}, num, posicao;
    bool existe;
    posicao = 0;
    existe = false;

    for (int i = 0; i < 20; i++)
    {
        cout << "Insira o numero " << i + 1 << endl;
        cin >> num;
        for (int i = 0; i < 20; i++)
        {
            if (nums[i] == num)
            {
                existe = true;
            };
        };
        if (existe)
        {
        }
        else
        {
            nums[posicao] = num;
            posicao++;
            existe = false;
        };
    };
    for (int i = 0; i < posicao; i++)
    {
        cout << "Vetor sem valores repetidos: " << endl;
        cout << "Elemento " << i + 1 << ": " << nums[i] << endl;
    };
}