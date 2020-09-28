#include <iostream>

using namespace std;

float calculaS(int n)
{
    float s = 1;

    for (float i = 1; i <= n; i++)
    {
        s += (1 / i);
    }
    return s;
}

int main()
{
    int n;
    float s;
    
    cout << "Por favor digite n";
    cin >> n;
    s = calculaS(n);

    cout << "S = " << s << endl;
    return 0;
}
