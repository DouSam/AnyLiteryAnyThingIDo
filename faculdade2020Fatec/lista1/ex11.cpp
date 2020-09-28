#include <iostream>

using namespace std;

int main()
{
    int nVagas, cdMasculino, cdFeminino, codigo, codigoMaior, totalCandidatos;
    double maiorCandVaga = 0, cdPVagas;

    cout << "Digite o codigo do curso ou 0 para parar: ";
    cin >> codigo;

    while (codigo != 0)
    {
        cout << "N vagas: ";
        cin >> nVagas;
        cout << "N candidatos do sexo masculino: ";
        cin >> cdMasculino;
        totalCandidatos += cdMasculino;
        cout << "N candidatos do sexo feminino: ";
        cin >> cdFeminino;
        totalCandidatos += cdFeminino;
        cdPVagas = (cdMasculino + cdFeminino) / nVagas;
        cout << "Numero de candidatos por vaga: ";
        cout << cdPVagas << endl;
        cout << "Porcentagem de candidatas: ";
        cout << (double(cdFeminino) / (double(cdMasculino + cdFeminino))) * 100 << endl;
        cout << "Codigo do curso: " << codigo << endl;
        if (cdPVagas > maiorCandVaga)
        {
            maiorCandVaga = double(cdPVagas);
            codigoMaior = codigo;
        };
        cout << "Digite o codigo do curso ou 0 para parar: ";
        cin >> codigo;
    };

    cout << "O curso: " << codigoMaior;
    cout << " tem a maior relação candidato por vaga" << maiorCandVaga << endl;
    cout << "Total de candidatos: " << totalCandidatos;
    return 0;
}