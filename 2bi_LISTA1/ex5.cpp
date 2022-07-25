#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, carta_sobrando;
  cin >> n; //recebeu carta

  stack<int> pilha;
  queue<int> fila;
  stack<int> pilha2;

  for (int i = n; i >= 1; i--) {
    pilha.push(n); //recebeu todos os números
  }

  do {
    fila.push(pilha.top());
    pilha.pop();

    if(!pilha.empty()){
         pilha2.push(pilha.top());
        pilha.pop();
    }
  } while (!pilha.empty()); //enquanto a pilha estiver vazia

  carta_sobrando = pilha2.top();
  pilha2.pop();

  do {
    fila.push(pilha2.top());
    pilha2.pop();
  } while (!pilha2.empty());

  cout << "Discarded cards: ";
  for(auto i = 0; !fila.empty(); i++) {
    cout << fila.front();
    fila.pop();
  }
  cout << endl << "Remaing Card: " << carta_sobrando << endl;
  return 0;
}