#include <bits/stdc++.h>
using namespace std;

int main(){
    int c1, c2;
    cin >> c1 >> c2;

    int fa, fb;
    cin >> fa >> fb;

    int soma = 0;
    if(c2 == fb ){
        if( c1 == fa ){
            cout << 0;
            return 0;
        }
    }
    else {
        soma++;
        if(c1 == 0 ) c1 = 1;
        else c1 = 0;

        if(c2 == 0) c2 = 1;
        else c2 = 0;
    }

    if(c1 == fa){
        cout << soma << endl;
        return 0;
    }
    else{
        soma++;
        cout << soma << endl;
    }


    return 0;
}
