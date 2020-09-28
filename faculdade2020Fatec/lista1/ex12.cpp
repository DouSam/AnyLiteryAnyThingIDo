#include <iostream>

using namespace std;

int main()
{
    double nota1, nota2, nota3, notaFinal, maiorNotaT, menorNotaT, mediaT = 0;
    int presencas, matricula, totalRp = 0, repFeq = 0;

    for (int i = 0; i < 100; i++)
    {
        cout << "Numero da matricula: ";
        cin >> matricula;

        cout << "Insira a nota 1: ";
        cin >> nota1;
        cout << "Insira a nota 2: ";
        cin >> nota2;
        cout << "Insira a nota 3: ";
        cin >> nota3;

        cout << "Frequencia do aluno: ";
        cin >> presencas;

        notaFinal = (nota1 + nota2 + nota3) / 3;

        mediaT += notaFinal;

        if (i == 0)
        {
            maiorNotaT = notaFinal;
            menorNotaT = notaFinal;
        }
        else
        {
            if (maiorNotaT < notaFinal)
            {
                maiorNotaT = notaFinal;
            };
            if (menorNotaT > notaFinal)
            {
                menorNotaT = notaFinal;
            };
        };
        char resultado;
        if (notaFinal > 59 && presencas > 39)
        {
            resultado = 'A';
        }
        else
        {
            resultado = 'R';
            totalRp++;
            if (presencas < 40)
            {
                repFeq++;
            };
        };

        cout << "Matricula numero: " << matricula << endl;
        cout << "Frequencia: " << presencas << endl;
        cout << "Nota final: " << notaFinal << endl;
        switch (resultado)
        {
        case 'A':
            cout << "Resultado: Aprovado!" << endl;
            break;
        case 'R':
            cout << "Resultado: REPROVADO!" << endl;
            break;
        };
    };

    cout << "Maior nota da turma: " << maiorNotaT << endl;
    cout << "Menor nota da turma: " << menorNotaT << endl;
    cout << "Media da turma: " << mediaT / 100 << endl;
    cout << "Alunos reprovados: " << totalRp << endl;
    cout << "Porcentagem reprovado por faltas: " << (double(repFeq) / 100) * 100;

    return 0;
}