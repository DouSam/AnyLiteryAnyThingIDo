#include <iostream>

using namespace std;

int main()
{
  float l1,l2,l3;

  cout << "Insira o lado 1: ";
  cin >> l1;
  cout << "Insira o lado 2: ";
  cin >> l2;
  cout << "Insira o lado 3: ";
  cin >> l3;

 if((l1 <= l2 + l3 ) && (l2 <= l3 + l1) && (l3 <= l2 + l1))
 {
   if(l1 == l2 && l1== l3)
   {
     cout << "Triângulo Equilátero.";
   }
   else if((l1 == l2) || (l2 == l3) || (l3 == l1))
   {
     cout << "Triângulo Isóscele.";
   }
   else
   {
     cout << "Triângulo Escaleno.";
   };
 }else
 {
   cout << "Não é um triângulo.";
 }

  return 0;
}