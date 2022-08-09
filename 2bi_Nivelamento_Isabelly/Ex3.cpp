/** Isabelly Temoteo ＞▽＜
*
3. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes
lidas
*
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int matriz[4][4];
  int matrizDois[4][4];

  set<int> maiorPos;
  set<int> maiorPosDois;

  cout << "Digite a primeira matriz: ";
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        cin >> matriz[i][j];
        maiorPos.insert(matriz[i][j]);
    }
  }

  cout << "Digite a segunda matriz: ";
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        cin >> matrizDois[i][j];
        maiorPosDois.insert(matrizDois[i][j]);
    }
  }

  int som = 0;
  int maiorV1;
   for (set<int>::iterator it=maiorPos.begin(); it!=maiorPos.end(); ++it){
      cout << *it << " ";
      if(som == maiorPos.size()-1) maiorV1 = *it;
      som++;
    }

   som = 0;
   int maiorV2;
   for (set<int>::iterator it=maiorPosDois.begin(); it!=maiorPosDois.end(); ++it){
      cout << *it << " ";
      if(som == maiorPosDois.size()-1) maiorV2 = *it;
      som++;
    }
    
    cout << "\nMaior valor da primeira matriz: " << maiorV1;
    cout << "\nMaior valor da segunda matriz: " << maiorV2;

  return 0;
}