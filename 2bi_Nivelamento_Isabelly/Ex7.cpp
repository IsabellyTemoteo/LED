/** Isabelly Temoteo ＞▽＜
*
7. Implemente no método main uma estrutura chamada TestaPilha, um programa que leia 15 números e
proceda, para cada um deles, como segue:
− se o número for par, insira-o na pilha;
− se o número lido for ímpar, retire um número da pilha;
− Ao final, esvazie a pilha imprimindo os elementos.
*
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> TestaPilha;
    cout << "Digite 15 numeros: ";
    for(int i = 0; i < 15; i++){
        int x; cin >> x;
        if( x%2 == 0 ) TestaPilha.push(x);
        else if(!TestaPilha.empty()) TestaPilha.pop();
    }

    int tamPilha = TestaPilha.size();
    cout << "\nElementos da pilha: ";
    for(int i = 0; i < tamPilha; i++){
        cout << TestaPilha.top() << " ";
        TestaPilha.pop();
    }

  return 0;
}