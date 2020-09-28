#include <iostream>

using namespace std;

int main()
{
    double nums[10], num;
    for (int i = 0; i < 10; i++)
    {
        cout << "Escreva o elemento " << i + 1;
        cout << endl;
        cin >> num;
        if (num < 0)
        {
            num = 0;
            nums[i] = num;
        }
        else
        {
            nums[i] = num;
        }
    };
    for (int i = 0; i < 10; i++)
    {
        cout << "Elemento " << i + 1;
        cout << " : " << nums[i] << endl;
    }
};