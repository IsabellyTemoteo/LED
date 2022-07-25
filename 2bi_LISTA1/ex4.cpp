/**Isabelly Temoteo - 3°Inf
 * 
Jogando Cartas Fora - BeeCrowd 1110
**/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(true){
        cin >> n;
        if (n == 0) return 0;

        queue<int> filaValores;
        for(int i = 1; i <= n; i++){
            filaValores.push(i);
        }

        vector<int> descartes;
        while(filaValores.size() >= 2){
            descartes.push_back(filaValores.front());
            filaValores.pop();
            filaValores.push(filaValores.front());
            filaValores.pop();
        }

        cout << "Discarded cards: ";
        for(int i = 0; i < descartes.size(); i++){
            cout << descartes[i];
            if(i != descartes.size()-1){
                cout << ", ";
            }
        }

        cout << endl;
        if(!filaValores.empty()){
            cout << "Remaining card: " << filaValores.front();
            filaValores.pop();
        }

        cout << endl;
    }
   
    return 0;
}