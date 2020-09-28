#include <iostream>

using namespace std;

int elevaXZ(int X, int Z)
{
    int  potencia = 1;
    for (int i = 1; i <= Z; i++)
        potencia = potencia * X;
    return (potencia);
}
int main()
{
    int x, z;
    cout << "X: ";
    cin >> x;
    cout << "Z: ";
    cin >> z;
    cout << "X^z = " << elevaXZ(x, z);

    return 0;
}