//Isabelly Temoteo - 3°Inf

/**[1 ponto] Crie um programa que leia um número indeterminado de valores inteiros não negativos até
que o valor -1 seja lido, armazenando-os em uma fila. Após a leitura dos valores, utilize uma pilha
para inverter a ordem dos valores, ou seja, remova todos os números da fila e insira na pilha.
Remova todos os números da pilha e os apresente em uma única linha separados por um espaço.
**/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    queue<int> fila;
    while(true){
        cin >> n; 
        if (n == -1) break;
        fila.push(n);
    }

    stack<int> pilha;
    while(!fila.empty()){
        pilha.push(fila.front());
        fila.pop();
    }

    while(!pilha.empty()){
        cout << pilha.top() << " ";
        pilha.pop();
    }

    return 0;
}