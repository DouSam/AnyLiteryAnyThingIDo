#include <iostream>

using namespace std;

int main()
{
    char sexo, resp;
    int rSim = 0, rNao = 0, respMNao = 0, respFSim = 0, pessoa = 0, votosM = 0, votosF = 0;
    double percF, percM;

    while (pessoa < 5)
    {
        cout << "Insira seu sexo[m ou f]: " << endl;
        cin >> sexo;
        cout << "Gostou do produto? [s ou n]" << endl;
        cin >> resp;

        switch (sexo)
        {
        case 'm':
            if (resp == 'n')
            {
                respMNao++;
                rNao++;
            }
            else
            {
                rSim++;
            };
            votosM++;
            break;
        case 'f':
            if (resp == 's')
            {
                respFSim++;
                rSim++;
            }
            else
            {
                rNao++;
            };
            votosF++;
            break;
        }
        pessoa++;
    };

    percF = double(respFSim) / double(votosF);
    percM = double(respMNao) / double(votosM);

    cout << "O numero de pessoas que responderam sim: " << rSim << endl;
    cout << "O numero de pessoas que responderam nao: " << rNao << endl;
    cout << "Porcentagem de pessoas do sexo feminino que responderam sim: " << percF << endl;
    cout << "Porcentagem de pessoas do sexo masculino que responderam nao: " << percM << endl;

    return 0;
}