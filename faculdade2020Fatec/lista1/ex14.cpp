#include <iostream>

using namespace std;

int main()
{
    int cidade1, cidade2;

    cout << "Digite o marco da 1º cidade: ";
    cin >> cidade1;

    cout << "Digite o marco da 2º cidade: ";
    cin >> cidade2;

    while (cidade1 != cidade2)
    {
        for (int i = 20; i <= 80; i += 10)
        {
            double tempoD = double(cidade2 - cidade1) / double(i);
            int minutos = tempoD * 60;
            int horas = minutos / 60;
            minutos = minutos % 60;
            if (tempoD > 2)
            {
                cout << "Marco quilometrico 1: " << cidade1 << endl;
                cout << "Marco quilometrico 2: " << cidade2 << endl;
                cout << "Velocidade: " << i << "Km/h" << endl;
                cout << "Tempo decorrido: " << horas << " horas ";
                if (minutos != 0)
                {
                    cout << minutos << " minutos" << endl;
                }
                else
                {
                    cout << endl;
                };
            };
        };

        cout << endl
             << "###################################" << endl;

        cout << "Digite a primeira cidade: ";
        cin >> cidade1;

        cout << "Digite a segunda cidade: ";
        cin >> cidade2;
    };
    return 0;
}