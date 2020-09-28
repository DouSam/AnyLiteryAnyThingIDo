#include <iostream>

using namespace std;

int main()
{
    double nums[10] = {}, num, numRetirado, numAtual;
    int posicao = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "digite um numero: ";
        cin >> num;

        if (i == 0)
        {
            nums[i] = num;
            posicao++;
        }
        else
        {
            for (int j = 0; j < posicao;)
            {
                //Se o numero consultado foi menor que o numero inserido, ele continua para proxima posicao do vetor
                if (nums[j] < num && nums[j] != 0)
                {
                    //Caso essa seja a ultima posicao atual preenchida do vetor, ele adiciona o numero.
                    if ((j + 1) == posicao)
                    {
                        nums[j + 1] = num;
                        posicao++;
                        j+=2;
                    }
                    else
                    {
                        j++;
                    };
                }
                //Caso ele encontre um numero maior que ele no vetor, ele vai deslocar todos os numeros para uma casa acima
                else
                {
                    int h=0;
                    for (h = i; h < posicao; h++)
                    {
                        nums[h] = numRetirado;
                        nums[h] = num;
                        num = numRetirado;
                    };
                    break;
                };
            };
        };
    };
    cout << "Vetor ordenado: " << endl;
    for (int h = 0; h < 10; h++)
    {
        cout << nums[h] << endl;
    };
};