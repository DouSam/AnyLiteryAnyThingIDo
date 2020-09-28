#include <iostream>

using namespace std;

int main()
{
    int d1, m1, a1, d2, m2, a2, dias = 0;

    cout << "Data 1: ";
    cin >> d1;
    cin >> m1;
    cin >> a1;
    cout << "Data 2: ";
    cin >> d2;
    cin >> m2;
    cin >> a2;

    if (a1 == a2)
    {
        if (m1 != m2)
        {
            for (int m = m1; m < m2; m++)
            {
                if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                    dias += 31;
                else
                {
                    if (m == 2)
                    {
                        if (a1 % 400 == 0 || (a1 % 4 == 0 && a1 % 100 != 0))
                            dias += 29;
                        else
                            dias += 28;
                    }
                    else
                        dias += 30;
                }
            }
            dias += d2;
            dias -= d1;
        }
        else
            dias = d2 - d1;
    }
    else
    {
        for (int m = m1; m <= 12; m++)
        {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                dias += 31;
            else
            {
                if (m == 2)
                {
                    if (a1 % 400 == 0 || (a1 % 4 == 0 && a1 % 100 != 0))
                        dias += 29;
                    else
                        dias += 28;
                }
                else
                    dias += 30;
            }
        }
        for (int m = 1; m < m2; m++)
        {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                dias += 31;
            else
            {
                if (m == 2)
                {
                    if (a1 % 400 == 0 || (a1 % 4 == 0 && a1 % 100 != 0))
                        dias += 29;
                    else
                        dias += 28;
                }
                else
                    dias += 30;
            }
        }
        for (int a = a1 + 1; a < a2; a++)
        {
            if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
                dias += 366;
            else
                dias += 365;
        }
        dias += d2;
        dias -= d1;
    }

    cout << "Se passaram " << dias << " dias." << endl;

    return 0;
}