#include <iostream>

using namespace std;

int retornaCat(int idade)
{
    if(idade < 8)
    {
        return 0;
    }
    else if(idade < 11)
    {
        return 1;
    }
    else if(idade < 14)
    {
        return 2;
    }
    else if(idade < 18)
    {
        return 3;
    }
    else
    {
        return 4;   
    }    
};

int main()
{
    int idade;
    string cat[5] = {"Infantil A", "Infantil B","Juvenil A","Juvenil B","Adulto"};
    cout << "Insira a idade do nadador: \n";
    cin >> idade;
    cout << "Categoria: " << cat[retornaCat(idade)];

    return 0;
}