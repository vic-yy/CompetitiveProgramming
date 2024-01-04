#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, nCartas, i;
    cin >> n;

    while (n > 0) {
        int carta[n];  
        i = 0;

        while (n > 0) {
            cin >> carta[i];
            i++;
            n--;
        }

        sort(carta, carta + i);

        do {
            for (int j = 0; j < i; j++) {
                cout << carta[j] << " ";
            }
            cout << endl;
        } while (next_permutation(carta, carta + i));
        cout << endl;

        cin >> n;
    }

    return 0;
}
