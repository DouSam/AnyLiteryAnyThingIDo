#include <iostream>

using namespace std;

void calculaIdeal(float altura, char sexo)
{
    float ideal;
    if (sexo == 'M')
    {
        ideal = (72.7 * altura) - 58;
        cout << "O peso ideal é: " << ideal;
    }
    else if (sexo == 'F')
    {
        ideal = (62.1 * altura) - 44.7;
        cout << "O peso ideal é: " << ideal;
    }
}

int main()
{
    float altura;
    char sexo;
    cout << "Informe qual é a sua altura: ";
    cin >> altura;
    cout << "Informe o sexo M para Masculino e F para Feminino: ";
    cin >> sexo;
    calculaIdeal(altura, sexo);
    return 0;
}