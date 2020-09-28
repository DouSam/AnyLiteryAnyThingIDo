#include <iostream>

using namespace std;

bool ePositivo(int n)
{
    return (n >= 0) ? true : false;
}

int main(void)
{

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    printf("O numero informado é %s\n", (ePositivo(num) ? ("positivo") : ("negativo")));

    return 0;
}