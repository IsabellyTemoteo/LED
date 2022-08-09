/** Isabelly Temoteo ＞▽＜
*
6. No método main de uma classe qualquer crie um objeto SequentialList representando uma lista
sequencial geral de números inteiros. Faça também as seguintes operações:
a) inserir os números 10, 20, 30, 40, 50
b) imprimir todos os números da lista;
c) inserir o número 14 no fim da lista;
d) ler um número e inseri-lo no início da lista.
e) ler um número e procurá-lo na lista, imprimindo a posição de sua primeira ocorrência a partir do
início; se não estiver na lista, imprimir uma mensagem adequada.
*
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> sequencialList = {10,20,30,40,50};

  cout << "Lista: ";
  for(auto i : sequencialList){
    cout << i << " ";
  }

  sequencialList.push_back(14);
  cout << "\nDigite um numero para o inicio da lista: ";
  int numX; cin >> numX;

  for (int i = sequencialList.size() - 1; i >= 1; i--)
  sequencialList[i] = sequencialList[i - 1];
  sequencialList[0] = numX;

  cout << "\nDigite o numero que deseja achar: ";
  int num; cin >> num;
  int pos = -1;
  for(int i = 0; i < sequencialList.size(); i++){
    if(sequencialList[i] == num){
        pos = i;
        break;
    }
  }

  if(pos != -1)
    cout << "\nPosicao de ocorrencia do numero: " << pos << endl;
  else cout << "Numero desejado nao se encontra presente na lista! Deseja adicionar? \n [1] = Sim \n [2] = Nao\n";
  int res; cin >> res;
  if(res == 1){
    sequencialList.push_back(num);
    cout << "Posicao do numero: " << sequencialList.size() << endl << "Programa encerrado.";
 }
  else cout << "Programa encerrado.";
  
  return 0;
}