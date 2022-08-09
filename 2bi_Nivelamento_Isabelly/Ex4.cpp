/** Isabelly Temoteo ＞▽＜
*
4. Programe um programa que lê três números, crie uma função que recebe os valores e retorna o maior
deles. Faça outra função que recebe os mesmos números e retorna o menor deles.
*
*/
#include <bits/stdc++.h>
using namespace std;

int maiorValor(int a, int b, int c){
    int maior = max(a,b);
    maior = max(maior, c);
    return maior;
}

int menorValor(int a, int b, int c){
    int menor = min(a,b);
    menor = min(menor,c);
    return menor;
}

int main() {
  cout << "Digite um valor: ";
  int a, b, c; cin >> a >> b >> c;
  cout << "Maior valor: " << maiorValor(a, b, c) << endl;
  cout << "Menor valor: " << menorValor(a,b,c) << endl;

  return 0;

}