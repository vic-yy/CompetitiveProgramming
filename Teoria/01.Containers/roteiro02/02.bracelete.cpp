#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, i, j, flag, size;
    cin >> n;
    string padrao, bracelete, bracelete2;
    size_t aux;

    while (n > 0){
        flag = 0;
        cin >> padrao;
        cin >> bracelete;

        bracelete2.clear();
        bracelete2 += bracelete;
        bracelete2 += bracelete;
        
        string padrao_r(padrao);
        reverse(padrao_r.begin(), padrao_r.end());

        aux = string::npos;
        aux = bracelete2.find(padrao);
        if(aux!= std::string::npos) flag = 1;

        if(flag==1) cout << "S";
        else cout << "N";
        n--;
        if(n>0) cout << endl;


    }

    return 0;
}
