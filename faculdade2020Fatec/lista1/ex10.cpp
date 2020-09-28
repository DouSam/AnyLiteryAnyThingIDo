#include <iostream>

using namespace std;

int main()
{
    int emi4 = 0, emi5 = 0, emi7 = 0, emi12 = 0, casas = 0, escolha = 1, qtdPessoas, audTotal;

    for (casas; escolha != 0; casas++)
    {
        cout << "Digite o canal [4,5,7,12 ou 0 para parar]: ";
        cin >> escolha;

        if (escolha == 0)
        {
            break;
        };

        cout << "Numero de pessoas assistindo: ";
        cin >> qtdPessoas;

        switch (escolha)
        {
        case 4:
            emi4 += qtdPessoas;
            break;
        case 5:
            emi5 += qtdPessoas;
            break;
        case 7:
            emi7 += qtdPessoas;
            break;
        case 12:
            emi12 += qtdPessoas;
            break;
        };

        audTotal += qtdPessoas;
    };

    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            cout << "Porcentagem emissora 4: " << (double(emi4) / double(audTotal)) * 100 << endl;
            break;
        case 1:
            cout << "Porcentagem emissora 5: " << (double(emi5) / double(audTotal)) * 100 << endl;
            break;
        case 2:
            cout << "Porcentagem emissora 7: " << (double(emi7) / double(audTotal)) * 100 << endl;
            break;
        case 3:
            cout << "Porcentagem emissora 12: " << (double(emi12) / double(audTotal)) * 100 << endl;
            break;
        };
    };

    return 0;
}