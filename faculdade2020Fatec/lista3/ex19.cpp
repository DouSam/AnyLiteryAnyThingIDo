#include <iostream>

using namespace std;

int main()
{
    int  n, maior = 0, menor = 9999, cont = 1;
    for (int x = 1; x <= 5; x++)
    {
        cout << "Informe um numero "
             << "[" << x << " de 50]:" << endl;
        cin >> n;
        if (n > maior)
        {
            maior = n;
        }
        if (n < menor)
        {
            menor = n;
        }
    }
    cout << "> numero: " << maior << endl
         << "< numero: " << menor;

    return 0;
}
