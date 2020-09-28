#include <iostream>

using namespace std;

int main()
{
    int qtdAlunos, matricula, ausentes, s5 = 0;
    char turma, status;
    float pAusentes;

    for (int i = 0; i < 14; i++)
    {
        cout << "Turma: ";
        cin >> turma;
        cout << "Quantidade: ";
        cin >> qtdAlunos;
        ausentes = 0;
        for (int j = 0; j < qtdAlunos; j++)
        {
            cout << "Matricula: ";
            cin >> matricula;
            cout << "Status: ";
            cin >> status;

            if (status == 'A')
                ausentes++;
        }
        pAusentes = (float)ausentes / qtdAlunos * 100;
        cout << "Turma: " << turma << endl;
        cout << "Ausência: " << pAusentes << "%" << endl;
        if (pAusentes > 5)
            s5++;
    }

    cout << s5 << " turmas tiveram ausência superior à 5%." << endl;

    return 0;
}