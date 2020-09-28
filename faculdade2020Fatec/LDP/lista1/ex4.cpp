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

  if( media >= 7)
  {
    cout << "Aluno Aprovado! Média: " << media;
  }else if(media >=3)
  {
    cout << "Aluno de Exame! Média: " << media;
  }else
  {
    cout << "Aluno Reprovado! Média: " << media;
  }

  return 0;
}