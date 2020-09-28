#include <iostream>

using namespace std;

char conceito(float m)
{
    if(m < 5)
    {
        return 'D';
    }
    else if(m < 7)
    {
        return 'C';
    }
    else if(m < 9)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
}

int main()
{

    float num;

    cout << "Digite a nota de media do aluno: ";
    cin >> num;

    cout << "O conceito final é: " << conceito(num) << endl;

    return 0;
}
