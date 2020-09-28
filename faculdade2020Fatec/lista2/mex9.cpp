#include <iostream>

using namespace std;

int main()
{
    //Analisando uma matriz ficticia de 5x5, foi possivel analisar que sempre o elemento na qual i > j, esse ficará localizado na parte inferior da diagonal principal.

    double matriz[3][3],soma=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Digite o elemento da linha: " << i+1;
            cout<<" da coluna: " << j+1 << endl;
            cin >> matriz[i][j];
            if(i>j)
            {
                soma += matriz[i][j];
            };
        };
    };
    cout << "Soma é igual: ";
    cout << soma;
}