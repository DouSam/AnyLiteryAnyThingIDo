#include <iostream>

using namespace std;

void retornaMedia()
{
    char op = 's';
    float salario = 0.0, soma_salario = 0;
    int filhos = 0, soma_filhos = 0, fs = 0;

    do
    {
        fs++;
        cout << "Salario: ";
        cin >> salario;
        cout << "Numero de filhos: ";
        cin >> filhos;

        soma_salario += salario;
        soma_filhos += filhos;

        cout << "Existem mais?" << endl;
        cin >> op;
    } while (tolower(op) == 's');

    cout << "Media de Salario: " << soma_salario / fs << endl
         << "Média de filhos: " << soma_filhos / fs << endl;
}

int main()
{
    retornaMedia();
    return 0;
}