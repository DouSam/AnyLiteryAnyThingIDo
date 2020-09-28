#include <iostream>

using namespace std;

int main()
{
    char tipo;
    int consumidor, N;
    float preco, consumoM, maior, menor, media, total_r, total_c, total_i, a_pagar;

    total_r = 0;
    total_c = 0;
    total_i = 0;
    N = 0;
    maior = -1;
    menor = 100000;

    consumidor = 1;

    while (consumidor != 0)
    {
        cout << "Informe o numero do consumidor: ";
        cin >> consumidor;
        if (consumidor == 0)
        {
            break;
        }
        cout << "informe o preco do kwh: ";
        cin >> preco;
        cout << "informe o consumo mensal: ";
        cin >> consumoM;
        cout << "informe o tipo de consumidor: [r, c, i]: ";
        cin >> tipo;

        a_pagar = consumoM * preco;

        if (consumoM > maior)
        {
            maior = consumoM;
        }
        if (consumoM < menor)
        {
            menor = consumoM;
        }

        switch (tipo)
        {
        case 'r' | 'R':
            total_r += consumoM;
            break;
        case 'c' | 'C':
            total_c += consumoM;
            break;
        case 'i' | 'I':
            total_i += consumoM;
            break;
        }

        cout << "numero do consumidor: " << consumidor << endl;

        cout << "total a pagar: " << a_pagar << endl;

        N++;
    }

    media = (total_r + total_c + total_i) / N;

    cout << "Maior consumo: " << maior << endl;
    cout << "Menor consumo: " << menor << endl;
    cout << "Media de consumo: " << media << endl;
    cout << "Total residencial: " << total_r << endl;
    cout << "Total comercial: " << total_c << endl;
    cout << "Total industrial: " << total_i << endl;

    return 0;
}