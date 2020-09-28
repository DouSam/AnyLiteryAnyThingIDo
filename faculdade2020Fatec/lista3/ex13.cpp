#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b)
        if (b < c)
            cout << "Ordenado: " << a << ", " << b << ", " << c;
        else if (a < c)
            cout << "Ordenado: " << a << ", " << c << ", " << b;
        else
            cout << "Ordenado: " << c << ", " << a << ", " << b;
    else if (b < c)
        if (a < c)
            cout << "Ordenado: " << b << ", " << a << ", " << c;
        else
            cout << "Ordenado: " << b << ", " << c << ", " << a;
    else
        cout << "Ordenado: " << c << ", " << b << ", " << a;
    return 0;
}