#include <iostream>

using namespace std;

void divisores(int n)
{
    cout << "Divisores: " << endl;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << " " << i << " " << endl;
        }
    };
}

int main()
{

    float num;

    cout << "Digite um numero: ";
    cin >> num;

    divisores(num);

    return 0;
}
