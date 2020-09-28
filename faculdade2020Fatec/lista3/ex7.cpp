#include <iostream>

using namespace std;

bool isPerfect(int n)
{
    int i = 1, sum = 0;

    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum == n ? true : false;
}

int main()
{
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    printf((isPerfect(num)) ? ("\nPerfeito\n") : ("\nNão perfeito\n"));

    return 0;
}