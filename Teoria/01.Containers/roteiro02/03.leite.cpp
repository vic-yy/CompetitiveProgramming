#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n,  i = 0, tam;
    cin >> n;
    int leite[n];
    tam = n;
    while (n > 0){
        cin >> leite[i];
        i++; 
        n--;
    }
    sort(leite, leite + tam);
    cout << leite[i/2];
    return 0;
}