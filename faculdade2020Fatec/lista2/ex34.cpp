#include <iostream>

using namespace std;

int main()
{
    double nums[10], num;
    int posicao = 0;

    for (int i = 0; i < 10;)
    {
        cout << "Insira um numero que já não esteja no vetor: ";
        cin >> num;
        //Adicionando o primeiro numero ao vetor
        if (posicao == 0)
        {
            nums[posicao] = num;
            posicao++;
            i++;
        }
        else
        {
            //Verificando se existe o numero no vetor.
            bool contem = false;
            for (int i = 0; (i < posicao) | contem;)
            {
                if (nums[i] == num)
                {
                    contem = true;
                    break;
                }
                else
                {
                    i++;
                };
            };
            if (contem)
            {
                cout << "Número ja inserido" << endl;
            }
            else
            {
                nums[posicao] = num;
                posicao++;
                contem = false;
                i++;
            };
        };
    };
    cout << "Vetor digitado: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << nums[i];
        cout << endl;
    };
    return 0;
}