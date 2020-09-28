#include <iostream>

using namespace std;

double returnS(double n)
{
    double s;

    for(int i = 1; i <= n; i++)
    {
        s += ((i*i)+1)/(n+3);
    };

    return s;
};

int main()
{
    double num,s;
    
    cout << "Insira um valor inteiro positivo: ";
    cin >> num;

    s = returnS(num);

    cout << "S: " << s;

    return 0;
};