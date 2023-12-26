#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n = 0, valor;
    cin >> n;
    if (n == 0 or n <=10) {
        valor = 7;
        cout << valor << endl;

    }
    else if (n > 10 and n <= 30) {
        valor = 7 + (n - 10);
        cout << valor << endl;
    } else if (n>30 and n <=100)
    {
        valor = 27 + (n-30)*2;
        cout << valor << endl;
    }
   else {
         valor = 167 + (n-100)*5;
         cout << valor << endl;
   }  



    return 0;
}