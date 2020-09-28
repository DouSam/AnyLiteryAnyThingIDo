#include <iostream>

using namespace std;

int main()
{
    int pessoaConsultada, numeroHomens;
    double altura, maiorAltura, menorAltura, mediaAlturaMulheres, numeroMulheres, somaAlturaMulheres;
    char sexo;

    numeroHomens = 0;
    numeroMulheres = 0;
    pessoaConsultada = 0;

    while (pessoaConsultada < 50)
    {
        cout << "Digite o sexo [m ou f]" << endl;
        cin >> sexo;

        cout << "Digite a altura: " << endl;
        cin >> altura;
        //Definir qual a maior altura -Inicio-
        if (pessoaConsultada == 0)
        {
            maiorAltura = altura;
            menorAltura = altura;
        }
        else
        {
            if (altura > maiorAltura)
            {
                maiorAltura = altura;
            };
            if (altura < menorAltura)
            {
                menorAltura = altura;
            };
        };
        //Fim

        //Adicionar altura para a variavel de soma de alturas, a fim de calcular a media.
        switch (sexo)
        {
        case 'f':
            somaAlturaMulheres += altura;
            numeroMulheres++;
            break;
        case 'm':
            numeroHomens++;
            break;
        };
        pessoaConsultada++;
    };

    cout << "Maior e menor altura do grupo são respectivamente: ";
    cout << maiorAltura;
    cout << " " << menorAltura << endl;

    mediaAlturaMulheres = somaAlturaMulheres / numeroMulheres;

    cout << "Media da altura das mulheres é: " << mediaAlturaMulheres << endl;

    cout << "Numero de homens e igual a: " << numeroHomens;

    return 0;
}