#include <iostream>

using namespace std;

float retornaMedia()
{
    float soma, num, media, i;

    soma = 0;
    i = 0;
    num = 1;

    for(i=0; num != 908799;i++)
    {
        cout << "Digite um numero positivo(ou 908799 para sair): " << endl;
        cin >> num;
        if(num == 908799)
        {
            break;
        }
        while (num < 0)
        {
            cout << "Numero invalido!" << endl;
            cout << "Digite um numero positivo: ";
            cin >> num;
        }

        soma += num;
    }

    media = soma / i ;

    return media;
}
int main()
{
    float r;

    r = retornaMedia();

    cout << "Média Arit: " << r;

    return 0;
}
