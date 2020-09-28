#include <iostream>
#include <math.h>

using namespace std;

double volumeEsfera(double raio)
{
    //4/3 * pi * r^3
    double volume = (4 * 3.14 * pow(raio,3))/3;
    return volume;
}

int main()
{
    double raio,volume;
    cout << "Digite o raio da esfera: ";
    cin >> raio;

    volume = volumeEsfera(raio);

    cout << "Volume: " << volume;
    cout << endl;

    return 0;
}