#include <iostream>

using namespace std;

int main()
{
    double habA, habB, taxaA, taxaB;
    int anos;

    anos = 0;
    habA = 90000000;
    habB = 20000000;
    taxaA = 1.015;
    taxaB = 1.030;

    while (habB < habA)
    {
        anos++;
        habB *= taxaB;
        habA *= taxaA;
    }

    cout << "Serao necessarios: " << anos << " anos" << endl;

    return 0;
}