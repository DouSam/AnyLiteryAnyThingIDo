#include <iostream>

using namespace std;

int main()
{
    int matriz[10][10];

    for(int i=1; i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(i<j)
            {
                matriz[i-1][j-1]=(2 * i) + (7 * j) - 2;
            }
            else if(i==j)
            {
                matriz[i-1][j-1]= (3*(i*i))-1;
            }
            else
            {
              matriz[i-1][j-1]= 4*(i*i*i)-5*(j*j)+1;  
            };            
        };
    };
    for (int i = 0; i < 10; i++)
    {
        for(int j=0;j<10;j++)
        {
            cout << matriz[i][j] << "    ";
        };
        cout << endl;
    };
}