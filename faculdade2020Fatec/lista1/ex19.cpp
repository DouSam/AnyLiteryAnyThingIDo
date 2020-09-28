#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    double tp1, tp2, tp3, t1, t2, t3, inc, valorAb, pontos = 0, tempoTotal;
    double p1, p2, p3, pontosVenc = 0;
    int vencedora;

    cout << "Digite os 3 tempos padrão: ";
    cin >> tp1;
    cin >> tp2;
    cin >> tp3;

    cout << "Digite a inscricao da equipe: ";
    cin >> inc;

    while (inc != 9999)
    {
        cout << "Digite os 3 tempos da equipe: ";
        cin >> t1;
        valorAb = abs(t1 - tp1);
        if (valorAb < 3)
        {
            pontos += 100;
            p1 = 100;
        }
        else if (valorAb <= 5)
        {
            pontos += 80;
            p1 = 80;
        }
        else
        {
            p1 = 80 - (valorAb - 5) / 5;
            pontos += p1;
        };
        cin >> t2;
        valorAb = abs(t2 - tp2);
        if (valorAb < 3)
        {
            pontos += 100;
            p2 = 100;
        }
        else if (valorAb <= 5)
        {
            p2 = 80;
            pontos += 80;
        }
        else
        {
            p2 = 80 - (valorAb - 5) / 5;
            pontos += p2;
        };
        cin >> t3;
        valorAb = abs(t3 - tp3);
        if (valorAb < 3)
        {
            p3 = 100;
            pontos += 100;
        }
        else if (valorAb <= 5)
        {
            p3 = 80;
            pontos += 80;
        }
        else
        {
            p3 = 80 - (valorAb - 5) / 5;
            pontos += p3;
        };
        cout << "Incricao n: " << inc << endl;
        cout << "Pontos obtidos: " << pontos << endl;
        cout << "Pontos obtidos etapa 1: " << p1 << endl;
        cout << "Pontos obtidos etapa 2: " << p2 << endl;
        cout << "Pontos obtidos etapa 3: " << p3 << endl;
        if (pontos > pontosVenc)
        {
            pontosVenc = pontos;
            vencedora = inc;
        };

        cout << "Digite a inscricao da equipe:";
        cin >> inc;
    };

    cout << "Equipe vencedora: " << vencedora;
    cout << " com: " << pontosVenc;
    cout << " ponto";

    return 0;
}
