/**Isabelly Temoteo - 3°Inf

[1,5 ponto] Faça um programa que leia uma linha e verifique se ela é um palíndromo. Veja a definição
de palíndromo no dicionário online Priberam: “Palavra, grupo de palavras, verso ou número que se lê
da mesma maneira da esquerda para a direita ou da direita para a esquerda”.
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string palavra;
    getline(cin, palavra);

    //SemEspaco = palavra sem os " ".
    string semEspaco="";
    for(int i = 0; i < palavra.size(); i++){
        if (palavra[i] == ' ') continue;
        semEspaco += palavra[i];
    }

    if (semEspaco == string(semEspaco.rbegin(), semEspaco.rend())) {
        cout << "Sim" << endl;
    } else {
        cout << "Nao" << endl;
    }

   
    return 0;
}