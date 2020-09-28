#include <iostream>

using namespace std;

int main()
{
  float nt1,nt2,media;

  cout << "Insira a nota 1: ";
  cin >> nt1;

  cout << "Insira a nota 2: ";
  cin >> nt2;

  media = (nt1 + nt2) / 2;

  if( media >= 6)
  {
    cout << "Aluno aprovado! Média: " << media;
  }else
  {
    cout << "Aluno reprovado! Média: " << media;
  }

  return 0;
}