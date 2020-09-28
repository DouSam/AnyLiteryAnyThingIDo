#include <iostream>

using namespace std;

int somatorio(int n)
{
    int soma = 0;

    for (int i = 0; i < n + 1; i++)
    {
        soma += i;
    }
    return soma;
}

int main()
{
    float num;

    cout << "Numero: ";
    cin >> num;

    cout << "Somatorio: " << somatorio(num) << endl;

    return 0;
}