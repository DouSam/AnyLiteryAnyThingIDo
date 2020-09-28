#include <iostream>

using namespace std;

int main()
{
    int f, c;

    c = 50;
    f = 0;

    while (c <= 150)
    {
        f = (c * 9 / 5) + 32;
        cout << "A conversao de " << c << "° para farenheit é equivalente a:" << endl;
        cout << f << "°" << endl;
        c++;
    };

    return 0;
}