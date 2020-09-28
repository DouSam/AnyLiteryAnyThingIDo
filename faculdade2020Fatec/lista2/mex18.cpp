#include <iostream>

using namespace std;

int main()
{
    double matriz[3][3],vetor[3]={0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento da linha: " << i + 1;
            cout << " da coluna: " << j + 1 << endl;
            cin >> matriz[i][j];
            vetor[j] += matriz[i][j];
        };
    };
    for(int i=0;i<3;i++)
    {
        cout <<vetor[i]<< " ";
    };
    return 0;
}