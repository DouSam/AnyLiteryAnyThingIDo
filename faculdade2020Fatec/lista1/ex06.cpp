#include <iostream>

using namespace std;

int main()
{
    int segundos, minutos, horas;
    double massaInicial, massaFinal, massaAtual;

    cout << "Por favor insira a massa:" << endl;
    cin >> massaInicial;

    segundos = 0;
    massaAtual = massaInicial;

    while (massaAtual >= 0.5)
    {
        massaAtual /= 2;
        segundos += 50;
    }

    massaFinal = massaAtual;

    minutos = segundos / 60;
    segundos = segundos % 60;

    horas = minutos / 60;
    minutos = minutos % 60;

    cout << "Massa inicial: " << massaInicial << endl;
    cout << "Massa final: " << massaFinal << endl;
    cout << "Tempo necessario: " << horas << " horas ";
    cout << minutos << " minutos ";
    cout << segundos << " segundos ";

    return 0;
}