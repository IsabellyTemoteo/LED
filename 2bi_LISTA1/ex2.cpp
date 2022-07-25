/**Isabelly Temoteo - 3°Inf

 [1 ponto] Neste exercício, a primeira linha da entrada é um valor N. As N linhas seguintes possuem
uma palavra. Crie uma programa que processe cada palavra e a escreva de trás para frente.
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<string> palavras;
    for(int i = 0; i < n; i++){
        string palavra; cin >> palavra;
        reverse(palavra.begin(), palavra.end());
        palavras.push_back(palavra);
    }

    for(int i = 0; i < n; i++){
        cout << palavras[i] << endl;
    }


    return 0;
}