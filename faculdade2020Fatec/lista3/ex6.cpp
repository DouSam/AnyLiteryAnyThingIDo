#include <iostream>

using namespace std;

int retornaDias(int dias, int meses, int anos)
{
    return (dias + (meses * 30) + (anos * 365));
}

int main()
{
    int dias, meses, anos;

    cout << "Digite a idade em dias meses e anos separados por espaços: ";
    cin >> dias >> meses >> anos;

    cout << "Idade em dias: " << retornaDias(dias, meses, anos);
    return 0;
}