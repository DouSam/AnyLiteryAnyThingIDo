#include <iostream>

using namespace std;

double fatora(double num)
{
    double total = 1;

    for(int i = 1; i <= num;i++)
    {
        total *= i;
    };

    return total;
};

double retornaS(double n)
{
    double s=1;
    double nFatorado;

    for(int i = 1; i<=n; i++)
    {
        nFatorado = fatora(i);
        s += 1/nFatorado;
    };
    return s;
};

int main()
{
    double num,s;
    cout << "Digite um valor inteiro:";
    cin >> num;
    s = retornaS(num);
    cout<< "Valor de S:"<<s;

    return 0;
};