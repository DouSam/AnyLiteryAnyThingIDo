#include <iostream>

using namespace std;

int main()
{

    double soma = 0;

    for (int i = 0; i < 10; i++)
    {
        double n = double(i + 1);
        int eImpar = (i >> 0) & 1;
        if (eImpar == 1)
        {
            soma += n / (n * n);
        }
        else
        {
            soma -= n / (n * n);
        };
    };

    cout << "Soma e igual: ";
    cout << soma;

    return 0;
}
