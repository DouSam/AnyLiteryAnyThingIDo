#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] =0;
            };
        };
    };
    for(int i=0; i<5;i++)
    {
        for(int j=0; j<5;j++)
        {
            cout << matriz[i][j];
        };
        cout <<endl;
    };
}