/** Isabelly Temoteo ＞▽＜
*
5. Crie um programa que recebe um número do usuário, passa esse valor para uma função e ela retorna
esse número escrito ao inverso. Por exemplo, você deu o valor 1234, então ele vai retornar 4321.
Dica: primeiro, crie uma função que conta quantos dígitos tem um número.
*
*/
#include <bits/stdc++.h>
using namespace std;

string reverse(string x){
    string newInt;
    for(int i = x.size(); i >= 0; i--){
        newInt += x[i];
    }

    return newInt;
}

int main() {
    int numero; cin >> numero;
    string numeroCarac = to_string(numero);
    
    cout << "Numero invertido: " << reverse(numeroCarac);

    return 0;
}