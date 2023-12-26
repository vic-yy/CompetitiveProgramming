#include <bits/stdc++.h>
using namespace std;

bool primo(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i*i <= n; ++i){
        if (n%i == 0){
            return false;
        }    
        }
    return true;
}

int gerador(int n){
    int i = 0;
    int num = 0;
    // Temos que 
    while (i != n){
        if(primo(num)){
            i++;
            num++;
    } else {
        num ++;
    }
    
}
return num - 1;
}

int main(){
    int n ;
    cin >> n;
    cout << gerador(n);
    return 0;
}