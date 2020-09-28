#include <iostream>

#define qtd 10

using namespace std;

int main()
{
  int nums[qtd], qtdP = 0, somI = 0, maiorP = 0, menorI = 99999;

  cout << "Insira 10 números inteiros.\n";

  for(int i = 0; i < qtd;i++){
    cout << "Número " << i + 1 << ": ";
    cin >> nums[i];
  }

  for(int i = 0; i < qtd; i++){
    if(nums[i] % 2 == 0){
      qtdP++;
      if(nums[i] > maiorP){
        maiorP = nums[i];
      }
    }else{
      somI += nums[i];
      if(nums[i] < menorI){
        menorI = nums[i];
      }
    }
  }

  cout << "Quantidade de números pares: " << qtdP << endl;
  cout << "Somatória de números ímpares: " << somI << endl;
  cout << "O maior número par: " << maiorP << endl;
  cout << "O menor númeor impar: " << menorI << endl;

}
