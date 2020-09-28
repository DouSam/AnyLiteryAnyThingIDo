#include <iostream>

using namespace std;

int main()
{

    double n1 = 37, n2 = 38, d = 1, soma = 0;

    while (d != 38)
    {
        soma = soma + ((n1 * n2) / d);
        cout << d << endl
             << n1 << endl
             << n2 << endl;
        d++;
        n1--;
        n2--;
    };

    cout << "Soma é: " << soma;

    return 0;
}
