#include <iostream>

using namespace std;

int main()
{
    // faixa1 = < 10%
    // faixa2 = >=10% e <= 20%
    // faixa3 = > 20%
    int numMerc, faixa1, faixa2, faixa3;
    char nome[25];
    double precoCompra, precoVenda, totalCompra, totalVendas, totalLucro, lucro;

    numMerc = 1;

    faixa1 = 0;
    faixa2 = 0;
    faixa3 = 0;

    totalLucro = 0;

    while (numMerc != 0)
    {
        cout << "Digite o numero da mercadoria e 0 apra parar" << endl;
        cin >> numMerc;
        cout << "Nome mercadoria: " << endl;
        cin >> nome;
        cout << "Preco de compra: " << endl;
        cin >> precoCompra;
        totalCompra += precoCompra;
        cout << "Preco de Venda: " << endl;
        cin >> precoVenda;
        totalVendas += precoVenda;

        lucro = (precoVenda - precoCompra) / precoCompra;
        totalLucro += precoVenda - precoCompra;
        if (lucro < 0.1)
        {
            faixa1++;
        }
        else if (lucro <= 0.2)
        {
            faixa2++;
        }
        else
        {
            faixa3++;
        };
    };

    cout << "Valor total compra: " << totalCompra << endl;
    cout << "Valor total venda: " << totalVendas << endl;
    cout << "Lucro total: " << totalLucro << endl;
    cout << "Faixa1(<10%): " << faixa1 << endl;
    cout << "Faixa1(10% a 20%): " << faixa2 << endl;
    cout << "Faixa1(>20%): " << faixa3 << endl;

    return 0;
}