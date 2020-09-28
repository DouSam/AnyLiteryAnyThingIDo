#include <iostream>

using namespace std;

void retornaTempo(int seg)
{
    int horas = seg / 3600;
    int minutos = (seg % 3600) / 60;
    int segundos = ((seg / 3600) % 60);

    cout << horas << " horas, " << minutos << " minutos, "
         << " e " << segundos << " segundos.";
}

int main()
{
    int segundos;

    cout << "Digite o tempo em segundos: ";
    cin >> segundos;

    retornaTempo(segundos);

    return 0;
}
