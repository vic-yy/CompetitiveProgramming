#include <iostream>
#include <set>
#include <algorithm>


using namespace std;

int main(){
    int n;
    while (cin >> n && n){
        set<string> dna;
        while(n>0){
            string str;
            cin >> str;
            sort(str.begin(), str.end());
            dna.insert(str);
            n--;
        }
        cout << endl;
        cout << dna.size() << endl;
    }
    return 0;
}