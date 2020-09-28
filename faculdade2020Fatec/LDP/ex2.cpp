#include <iostream>

#define qtd 10

using namespace std;

void insereTemp(float temps[qtd]){
  for(int i = 0; i < qtd ; i++){
    cout << "Insira a temperatura " << i + 1 << ": ";
    cin >> temps[i];
  }
}

void mostraTemp(float temps[qtd]){
  for(int i = 0; i < qtd ; i++){
    cout << "\nTemperatura " << i + 1;
    cout << ": " << temps[i] << "º";
  }
}

void calculaMedia(float temps[qtd]){
  float somaTemp;
  for(int i = 0; i < qtd ; i++){
    somaTemp += temps[i];
  }
  cout << "Média das Temperaturas: " << somaTemp / qtd << "º"<< endl;
}

void maiorTemp(float temps[qtd]){
  float maiorT;
  for(int i = 0; i < qtd ; i++){
    if(i == 0){
      maiorT = temps[i];
    }
    if(temps[i] > maiorT){
      maiorT = temps[i];
    }
  }
  cout << "Maior temperatura: " << maiorT;
  cout << endl;
}

void menorTemp(float temps[qtd]){
  float menorT;
  for(int i = 0; i < qtd ; i++){
    if(i == 0){
      menorT = temps[i];
    }
    if(temps[i] < menorT){
      menorT = temps[i];
    }
  }
  cout << "Menor temperatura: " << menorT;
  cout << endl;
}

int main()
{
  float temps[qtd];
  int opc = 0;

  while(opc != 6){
    cout << "Insira a opção:\n";
    cout << "\n1 - Inserir Temperaturas";
    cout << "\n2 - Mostrar Temperaturas";
    cout << "\n3 - Calcular Média";
    cout << "\n4 - Calcula Maior Temperatura";
    cout << "\n5 - Calcula Menor Temperatura";
    cout << "\n6 - Sair\n";
    cin >> opc;
    switch(opc){
      case 1:
        insereTemp(temps);
        break;
      case 2:
        mostraTemp(temps);
        break;
      case 3:
        calculaMedia(temps);
        break;
      case 4:
        maiorTemp(temps);
        break;
      case 5:
        menorTemp(temps);
        break;
      case 6:
        cout << "Até mais!";
        break;
    }
  }
}
