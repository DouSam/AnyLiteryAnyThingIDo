#include <iostream>

using namespace std;

void fatora(int num)
{
    int i;
    int f = 1;
    for (i = 1; i <= num; i++)
    {
        f *= i;
    }
    cout << "Fatorial: " << f << endl;
}

int main()
{
    int num;
    cout << "Informe numero: ";
    cin >> num;
    if(num == 1)
    {
        cout << "Fatorial: 1";
    }
    else
    {
        fatora(num);
    }
    return 0;
}