#include <iostream>

using namespace std;

int main()
{
    int numInc, idade, numF = 0, numM = 0, sumHomens45 = 0, numF35, menorIdadeF = 99999, incMenorIdadeF, idade45 = 0;
    char sexo, exp;

    cout << "Numero da inscricao, 0 para parar: ";
    cin >> numInc;

    while (numInc != 0)
    {
        cout << "Idade candidato(a):";
        cin >> idade;

        cout << "Sexo candidato(a) M-Masculino F-Feminino:";
        cin >> sexo;

        cout << "Possui experiencia no servico S-Sim N-Nao:";
        cin >> exp;

        if (sexo == 'F')
        {
            numF++;
            if (idade < 35 && exp == 'S')
            {
                numF35++;
            };
            if (idade < menorIdadeF && exp == 'S')
            {
                menorIdadeF = idade;
                incMenorIdadeF = numInc;
            };
        }
        else
        {
            numM++;
            if (idade > 45)
            {
                sumHomens45 += idade;
                idade45++;
            };
        };

        cout << "Dados: " << endl;
        cout << "Numero inscricao: " << numInc << endl;
        cout << "Idade: " << idade << endl;
        cout << "Sexo: " << sexo << endl;
        cout << "Possui experiencia: " << exp << endl;

        cout << "Numero da inscricao, 0 para parar: ";
        cin >> numInc;
    };

    cout << "Numero candidatas: " << numF << endl;
    cout << "Numero candidatos: " << numM << endl;
    cout << "Idade media dos homens com mais 45 anos entre o total de homens: ";
    cout << double(sumHomens45) / double(idade45) << endl;
    cout << "Numero de mulheres que tem idade inferior a 35 anos e com experiencia no servico: ";
    cout << numF35 << endl;
    cout << "A menor idade entre mulheres que já tem experiencia: ";
    cout << menorIdadeF << " sua inscricao: " << incMenorIdadeF << endl;

    return 0;
}