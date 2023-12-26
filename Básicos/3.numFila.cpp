#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>fila;
    int n, num, res, teste = 0;
    while (cin >> n){
        teste ++;
    for (int i = 1; i <= n; ++i){
        cin >> num;
        fila.push_back(num);
        if (i == num){
            res = num;
        } 
    }
    cout << "Teste " << teste <<"\n" << res << endl; 
    }

    return 0;
}