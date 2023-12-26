#include <bits/stdc++.h>

using namespace std;

int countMoves(int a, int b){
    int dif = a % b;
    if (dif == 0){
        return 0;
    }else{
        return b - dif;
    }
}

int main(){
    int n;
    cin >> n;
    while (n--){
        int a, b;
        cin >> a >> b;
        cout << countMoves(a,b) << endl;
    }

    return 0;
}