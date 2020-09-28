#include <iostream>

using namespace std;

int triangulo(float x, float y, float z)
{
    if (!(x < (y + z) && y < (x + z) && z < (x + y)))
        return 0;
    if (x == y && y == z)
        return 1;
    if (x != y && x != z && z != y)
        return 2;
    return 3;
}

int main()
{

    float n1, n2, n3;
    string str;

    cout << "Digite os valores dos tres lados de um triangulo: ";
    cin >> n1 >> n2 >> n3;

    int result = triangulo(n1, n2, n3);

    switch (result)
    {
    case 0:
        str = "Nao formam um triangulo.";
        break;

    case 1:
        str = "Formam um triangulo equilatero";
        break;

    case 2:
        str = "Nao formam um escaleno.";
        break;

    case 3:
        str = "Nao formam um isosceles.";
        break;
    }

    cout << "Os lados passados: " << str;

    return 0;
}
