/**
Utilize a classe vector para desenvolver este exercício. Crie um programa que insira 15
inteiros em vetor da classe vector. Os valores inseridos deverão ser gerados aleatoriamente no
intervalo [11, 105]. Após o preenchimento, imprima o conteúdo do vetor em uma mesma linha,
separados por um espaço
**/

// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;

int numeroAleatorio(){
  int numero;
  numero = rand();
  if(numero < 11 || numero > 105)
    return numeroAleatorio();
  return numero;
}

int main() {
  vector<int> vetorNumeros;
  for(int i = 0; i < 15; i++)
    vetorNumeros.push_back(numeroAleatorio());
  
  for(int i = 0; i < 15; i++)
    cout << vetorNumeros[i] << " ";
  
  cout << "\n";
  return 0;
}