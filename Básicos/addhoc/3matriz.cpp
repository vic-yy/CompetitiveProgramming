#include <iostream>
#include <algorithm>
using namespace std;


void matriz (int n){
    int value = 0;
    for (int i =0; i <n; ++i){
        for (int j=0;j<n;++j){
                value = max(i-j+1,j-i+1);
                cout << value << " ";
            
        }
        cout << endl;
    }
}



int main(){
    int n;
    cin >> n;
    matriz(n);

    return 0;
}