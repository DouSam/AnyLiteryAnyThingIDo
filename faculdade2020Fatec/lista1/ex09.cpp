#include <iostream>

using namespace std;

int main()
{
    int nascidas, mortas = 0, meses, masculino = 0, menos24 = 0;
    char sexo;
    double percMortas, percMortasM;

    sexo = 'M';

    cout << "Insira o numero de criancas nascidas no periodo: " << endl;
    cin >> nascidas;

    while (sexo != 'V')
    {
        cout << "Insira o sexo da crianca[M ou F]: " << endl;
        cin >> sexo;
        if (sexo == 'V')
        {
            break;
        };
        if (sexo == 'M')
        {
            masculino++;
        };

        cout << "Insira o numero de meses de vida: " << endl;
        cin >> meses;

        if (25 > meses)
        {
            menos24++;
        };

        mortas++;
    };

    percMortas = (double(mortas) / double(nascidas)) * 100;

    cout << "Percentual de criancas mortas: " << percMortas << endl;

    percMortasM = (double(masculino) / double(mortas)) * 100;

    cout << "Percentual de criancas mortas do sexo masculino: " << percMortasM << endl;

    cout << "Percentual de crianças mortas que viveram 24 meses ou menos: ";
    cout << (double(menos24) / double(mortas)) * 100;

    return 0;
}