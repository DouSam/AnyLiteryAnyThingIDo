#include <iostream>

using namespace std;

int jogo()
{
    int h1, m1, h2, m2, t;
    cout << "Digite a hora e minutos do inicio do jogo separado por espaço: " << endl;

    cin >> h1 >> m1;
    cout << "Digite a hora e minutos do fim do jogo separado por espaço: " << endl;
    cin >> h2 >> m2;
    if (h1 == h2 && m1 == m2)
        t = 1140;
    else
    {
        if (m1 > m2)
        {
            if (h1 > h2)
                t = (((h2 + 24) - h1) * 60) + ((m2 + 60) - m1);
            else
                t = ((h2 - h1) * 60) + ((m2 + 60) - m1);
        }
        else
        {
            if (h1 > h2)
                t = (((h2 + 24) - h1) * 60) + (m2 - m1);
            else
                t = ((h2 - h1) * 60) + (m2 - m1);
        }
    }
    return t;
}
int main()
{
    int partida;
    partida = jogo();
    cout << "Tempo da partida foi " << partida << " minutos";
    return 0;
}
