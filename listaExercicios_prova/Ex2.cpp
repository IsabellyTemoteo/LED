//Imprimir pares

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,int>> vetor;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        int num2; cin >> num2;

        vetor.push_back(make_pair(num, num2));
    }

    for(int i = 0; i < n; i++){
        cout << "(" << vetor[i].first << ", " << vetor[i].second << ")" << endl;
    }
    
    return 0;
}
