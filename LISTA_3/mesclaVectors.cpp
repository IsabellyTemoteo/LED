/**
Defina uma função que receba dois vetores (vector) v1 e v2 de inteiros. A função deve
retornar um vetor (vector) cujo conteúdo consiste nos valores intercalados presentes nos vetores
v1 e v2, ou seja: o primeiro valor presente em v1, seguido do primeiro valor presente em v2; o
segundo valor presente em v1, seguido do segundo valor presente em v2; e, assim,
sucessivamente. Caso os vetores tenham tamanhos diferentes, os demais valores presentes no
maior vetor deverão ser inseridos no fim do vetor que será retornado. Faça um programa que mostre
o perfeito funcionamento da função
**/

// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;

vector<int> mesclaVetores(vector<int> vectorUm, vector<int> vectorDois){
  vector<int> vetorDeRetorno;
  int tamanho;
  if( vectorUm.size() > vectorDois.size())
    tamanho = vectorUm.size();
  else tamanho = vectorDois.size();
  for(int i = 0; i < tamanho; i++){
    if(i < vectorUm.size())
      vetorDeRetorno.push_back(vectorUm[i]);
    if(i < vectorDois.size())
    vetorDeRetorno.push_back(vectorDois[i]);
  }
  return vetorDeRetorno;
}


int main() {
  vector<int> vectorUm = {1,3,5,7,9,11,12,13,14};
  vector<int> vectorDois = {2,4,6,8,10,12};

  vector<int> Resposta = mesclaVetores(vectorUm, vectorDois);
  for(int i = 0; i < vectorUm.size()+vectorDois.size(); i++){
    cout << Resposta[i] << " ";
  }

  
  cout << "\n";
  return 0;
}