//Média de N números, com 2 casas após a vírgula.

#include <bits/stdc++.h>
using namespace std;

int main(){

    float soma = 0;
    int quantidadeNumeros = 0;

    while(true){
        int numeros;
        cin >> numeros;
        if(numeros == -1) break;
        quantidadeNumeros++;
        soma += numeros;
    }

    cout << fixed << setprecision(2);
    cout << "Media: " << soma/quantidadeNumeros << endl;
    
    return 0;
}
