#include <iostream>

using namespace std;

int main()
{
    double s = 0, denominador = 1, numerador = 1;
    //numerador +2
    //denominador + 1
    while (denominador != 51)
    {
        cout << "Numerador: " << numerador;
        cout << " Denominador: " << denominador << endl;
        s += double(numerador) / double(denominador);
        numerador += 2;
        denominador++;
    };

    cout << "O valor de S é: ";
    cout << s;

    return 0;
}