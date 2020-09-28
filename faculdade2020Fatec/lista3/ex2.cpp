#include <iostream>

using namespace std;

double calcMedia(double nota1, double nota2, double nota3, char forma)
{
    double media;
    switch (forma)
    {
        case 'A':
            media = (nota1+nota2+nota3)/3;
            break;
        case 'P':
            media = ((nota1 * 5) + (nota2 * 3) + (nota3 *2))/10;
            break;
        case 'H':
            media = 3 / ((1/nota1)+(1/nota2)+(1/nota3));
            break;
        default:
            cout << "Valor inserido fora do intervalo." << endl;
            break;
    } ;
    return media;
};

int main()
{
    double nt1,nt2,nt3,media;
    char forma;

    cout << "Insira as notas 1, 2 e 3 em cada linha: "<< endl;
    cin >> nt1;
    cin >> nt2;
    cin >> nt3;
    cout << "Insira a forma de calculo[A,P,H]: ";
    cin >> forma;

    media = calcMedia(nt1,nt2,nt3,forma);
    cout << "Média é igual: "<< media;
    return 0;
};