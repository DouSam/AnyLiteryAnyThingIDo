#include <iostream>

using namespace std;

int main()
{
    int nums[100], posicao = 0;

    for (int i = 0; posicao < 100; i++)
    {
        if ((i % 7) != 0 & (i % 10) != 7)
        {
            nums[posicao] = i;
            posicao++;
        }
    }
    cout << "Vetor sem multiplos 7 ou que terminam com 7: ";
    cout << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << "Elemento " << i + 1;
        cout << ": " << nums[i];
        cout << endl;
    };
};