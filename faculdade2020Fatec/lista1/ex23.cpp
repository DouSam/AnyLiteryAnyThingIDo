#include <iostream>

using namespace std;

float potencia(int base, int exp)
{
    float resultado = base;
    int i;
    for (i = 0; i < exp - 1; i++)
    {
        resultado = resultado * base;
    }
    return resultado;
}
//numerador/denominaodr
int main()
{

    float soma = 0, numerador = 2, denominador = 50, exp = 1;

    while (denominador != 0)
    {
        soma = soma + (potencia(numerador, exp) / denominador);
        exp++;
        denominador = denominador - 1;
    };

    cout << "Soma: " << soma;

    return 0;
}
