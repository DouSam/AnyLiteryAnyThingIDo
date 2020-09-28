#include <iostream>

using namespace std;

int main()
{
    double preco, qtd = 120, despesa = 200, lucroMax = 0, precoMax, maxIngressos;

    cout << "PRECO | QTD |   LUCRO" << endl;

    preco = 5.00;

    while (preco >= 1)
    {
        double lucro = (preco * qtd) - 200.00;
        if (lucro > lucroMax)
        {
            lucroMax = lucro;
            precoMax = preco;
            maxIngressos = qtd;
        };
        cout << preco << "      ";
        cout << qtd << "      ";
        cout << lucro << "      ";
        cout << endl;
        preco -= double(00.50);
        qtd += 26.00;
    };

    cout << "Lucro maximo esperado: " << lucroMax << endl;
    cout << "Preco ingresso: " << precoMax << endl;
    cout << "Vendendo " << maxIngressos;
    cout << " ingressos." << endl;

    return 0;
}