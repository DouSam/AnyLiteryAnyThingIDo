#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int tabuadas[4] = {};
  int qtdLinhas;

  for(int i = 0; i < 4; i++)
  {
    printf("Insira a tabuada da coluna %d: ",i + 1);
    cin >> tabuadas[i];
  };

  printf("Insira a quantidade de linha das tabuadas: ");
  cin >> qtdLinhas;

  for(int i = 0; i < qtdLinhas; i++)
  {
    printf("\n%3d x %3d = %4d \t", tabuadas[0],i,(tabuadas[0] * i));
    printf("%3d x %3d = %4d \t", tabuadas[1],i,(tabuadas[1] * i));
    printf("%3d x %3d = %4d \t", tabuadas[2],i,(tabuadas[2] * i));
    printf("%3d x %3d = %4d \t", tabuadas[3],i,(tabuadas[3] * i));
  };

  return 0;
}