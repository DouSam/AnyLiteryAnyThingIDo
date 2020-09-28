#include <iostream>

using namespace std;

int main()
{
    int nums[10], numsI[10], preenchido = 0, num;

    for (int i = 0; i < 10;)
    {
        cout << "Insira um numero de [0,50]: ";
        cin >> num;
        if (num<0 | num> 50)
        {
            cout << "Numero superior a 50 ou inferior a 0, insira novamente";
            cout << endl;
        }
        else
        {
            nums[i] = num;
            if ((num % 2) != 0)
            {
                numsI[preenchido] = num;
                preenchido++;
            };
            i++;
        };
    };
    cout << "Primeiro vetor: " << endl;
    for (int i = 0; i < 10;)
    {
        cout << nums[i] << ",";
        if ((i + 1) > 9)
        {
            i++;
        }
        else
        {
            cout << nums[i + 1];
            i += 2;
        };
        cout << endl;
    };

    cout << "Segundo vetor: " << endl;
    for (int i = 0; i < preenchido;)
    {
        cout << numsI[i] << ",";
        if ((i + 1) >= preenchido)
        {
            break;
        }
        else
        {
            cout << numsI[i + 1];
            i += 2;
        };
        cout << endl;
    };
    return 0;
}