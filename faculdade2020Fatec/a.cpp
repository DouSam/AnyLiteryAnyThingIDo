#include <iostream>

using namespace std;

int main()
{
    int consumidor, N;
    float preco, cons, maior, menor, media, total_r, total_c, total_i, a_pagar;
    char tipo;

    total_r = 0;
    total_c = 0;
    total_i = 0;
    N = 0;
    maior = -1;
    menor = 1000;

    consumidor = 1;

    while (consumidor != 0)
    {
        cout << "informe o numero do consumidor: ";
        cin >> consumidor;
        if (consumidor == 0)
        {
            break;
        }
        cout << "informe o preco do kwh: ";
        cin >> preco;
        cout << "informe o consumo mensal: ";
        cin >> cons;
        cout << "informe o tipo de consumidor: [r, c, i]: ";
        cin >> tipo;

        a_pagar = cons * preco;

        if (cons > maior)
        {
            maior = cons;
        }
        if (cons < menor)
        {
            menor = cons;
        }

        switch (tipo)
        {
        case 'r':
            total_r = total_r + cons;
            break;
        case 2:
            if (tipo == 'c' | tipo == 'C')
            {
                total_c = total_c + cons;
            }
            break;
        case 3:
            if (tipo == 'i' | tipo == 'I')
            {
                total_i = total_i + cons;
            }
            break;
        }

        cout << "numero do consumidor: " << consumidor << endl;

        cout << "total a pagar: " << a_pagar << endl;

        N = N + 1;
    }

    media = (total_r + total_c + total_i) / N;

    cout << "maior consumo: " << maior << endl;
    cout << "menor consumo: " << menor << endl;
    cout << "media de consumo: " << media << endl;
    cout << "total residencial: " << total_r << endl;
    cout << "total comercial: " << total_c << endl;
    cout << "total industrial: " << total_i << endl;

    return 0;
}