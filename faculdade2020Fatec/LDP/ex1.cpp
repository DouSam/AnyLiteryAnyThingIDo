#include <iostream>

#define qtd 10

using namespace std;

int main()
{
  float temps[qtd], somaTemp = 0;

  for(int i = 0; i < qtd ; i++){
    cout << "Insira a temperatura " << i + 1 << ": ";
    cin >> temps[i];
  }

  for(int i = 0; i < qtd ; i++){
    cout << "\nTemperatura " << i + 1;
    cout << ": " << temps[i] << "º";
    somaTemp += temps[i];
  }

  cout << "\n Média das temperaturas: " << somaTemp / qtd;

}