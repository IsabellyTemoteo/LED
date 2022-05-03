/**
Faça um programa que utilize a classe pair para representar pontos no espaço
bidimensional. Utilizando a classe vector, crie um vetor e preencha-o com 10 pontos com valores
aleatórios cuja distância para a origem do sistema cartesiano seja menor ou igual a 100 unidades.
Imprima as coordenadas do ponto que possua a menor distância para a origem. A figura abaixo
ilustra as informações do exercício
**/

// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;

int randomNumber(){
  int x = rand();
  if(x > 100 )
    return randomNumber();
  return x;
}

int main() {
  vector<pair<int,int>> localizacao;
  for(int i = 0; i<10; i++)
    localizacao.push_back(make_pair(randomNumber(), randomNumber()));

  cout << "Pares: " << "\n";
  for(int i = 0; i<10; i++)
    cout << localizacao[i].first << " " << localizacao[i].second << "\n";

  int distanciaMenor, saveX, saveY;
  for(int i = 0; i<10; i++){
    //Para calcular distância entre dois pontos:
    // raiz de (Xb - Xa)^2 + (Yb-Ya)^2 
    int conta1 = ( localizacao[i].first - 0);
    int conta2 = (localizacao[i].second - 0);
    int save1 = pow(conta1, 2);
    int save2 = pow(conta2, 2);
    double distancia = pow(conta1+conta2, 0.5);

    if(i == 0 ) distanciaMenor = distancia;
    if(distancia < distanciaMenor){
      distanciaMenor = distancia;
      saveX = localizacao[i].first;
      saveY = localizacao[i].second;
    }
      
  }

  cout << "\nMenor Distância: \n";
  cout << "(" << saveX << ", " << saveY << ")" <<"\n";
  return 0;
}