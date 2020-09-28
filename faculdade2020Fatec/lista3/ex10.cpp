#include <iostream>

using namespace std;

bool parouimpar(int n)
{
    return (n % 2 == 0) ? true : false;
}

int main()
{

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (parouimpar(num))
    {
        cout << "O numero é par.";
    }
    else
    {
        cout << "O numero é impar.";
    }

    return 0;
}