#include <iostream>

using namespace std;

int main()
{
    int opSmax, opLmax, radiosLMax = 0, radiosSMax = 0, op = 40, radiosL = 0, radiosS = 0;
    double lucroXr = 0, lucroYc = 0, lucroMax = 0, lucroS = 0, lucroL = 0;

    cout << "Insira o lucro do rádio Standard: ";
    cin >> lucroXr;

    cout << "Insira o lucro do rádio de Luxo:";
    cin >> lucroYc;

    for (int i = 8; i < 25; i++)
    {
        radiosS = i;
        radiosL = (40 - i) / 2;

        lucroS = double(radiosS) * double(lucroXr);
        // Convertendo cruzados(Cz$) para real.
        lucroL = double(radiosL) * (double(lucroYc) / 2750000000);

        double lucroTotal = lucroS + lucroL;

        if (lucroTotal > lucroMax)
        {
            lucroMax = lucroTotal;
            opSmax = i;
            opLmax = 40 - i;
            radiosSMax = i;
            radiosLMax = opLmax / 2;
        };
    };

    for (int i = 16; i < 32; i++)
    {
        radiosS = 40 - i;
        radiosL = i / 2;

        lucroS = double(radiosS) * double(lucroXr);
        // Convertendo cruzados(Cz$) para real.
        lucroL = double(radiosL) * (double(lucroYc) / 2750000000);

        double lucroTotal = lucroS + lucroL;

        if (lucroTotal > lucroMax)
        {
            lucroMax = lucroTotal;
            opSmax = 40 - i;
            opLmax = i;
            radiosSMax = 40 - i;
            radiosLMax = i / 2;
        };
    };

    cout << "Lucro maximo: ";
    cout << lucroMax << endl;
    cout << "Operadores Standard: ";
    cout << opSmax << endl;
    cout << "Operadores Luxo: ";
    cout << opLmax << endl;
    cout << "Radios standard: ";
    cout << radiosSMax << endl;
    cout << "Radios luxo: ";
    cout << radiosLMax;

    return 0;
}