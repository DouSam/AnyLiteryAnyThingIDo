#include <iostream>

using namespace std;

void tabuada(int n)
{
    for (int i = 0; i <= n; i++)
        cout << "\t" << n << " x " << i << " = " << (n * i) << endl;
}

int main()
{
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    tabuada(num);

    return 0;
}
