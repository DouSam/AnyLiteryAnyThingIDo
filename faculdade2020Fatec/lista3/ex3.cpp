#include <iostream>

using namespace std;

bool retornLog(int num)
{
    bool primo = true;

    for(int i =2; i < num;i++ )
    {
        if(num % i == 0)
        {
            primo = false;
        };
    };

    return primo;
}

int main()
{
    int num;
    bool vLogico;
    cout << "Insira um valor inteiro e positivo: ";
    cin >> num;

    vLogico = retornLog(num);
    if(vLogico)
    {
        cout << "Verdadeiro.";
    }
    else
    {
        cout << "Falso.";
    };

    return 0;
}