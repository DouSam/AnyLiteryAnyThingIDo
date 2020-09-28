#include <iostream>

using namespace std;

int main()
{
    double conj1[5], conj2[5], proEsc = 0;

    cout << "Insira os valores do conjunto 1: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> conj1[i];
    };
    cout << "Insira os valores do conjunto 2: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> conj2[i];
    };
    cout << "Exibindo conjunto 1:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << i + 1 << endl;
        cout << " " << conj1[i] << endl;
    };
    cout << "Exibindo conjunto 2:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << i + 1 << endl;
        cout << " " << conj2[i] << endl;
    };
    cout << "Exibindo produto escalar: ";
    for (int i = 0; i < 5; i++)
    {
        proEsc += conj1[i] * conj2[i];
    };
    cout << proEsc;
}