#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string palavra[n], palavra_ord[n];
    for (int i = 0; i < n; ++i) {
        cin >> palavra[i];
        palavra_ord[i] = palavra[i];

        // Converter a palavra para minúsculas antes de ordenar
        transform(palavra_ord[i].begin(), palavra_ord[i].end(), palavra_ord[i].begin(), ::tolower);
        auto it = unique(palavra_ord[i].begin(), palavra_ord[i].end());
        palavra_ord[i].erase(it, palavra_ord[i].end());
        sort(palavra_ord[i].begin(), palavra_ord[i].end());
    }

    for (int i = 0; i < n; ++i) {
        // Converter a palavra original para minúsculas antes de comparar
        transform(palavra[i].begin(), palavra[i].end(), palavra[i].begin(), ::tolower);

        if (palavra_ord[i] == palavra[i]) {
            cout << palavra[i] << " :O" << endl;
        } else {
            cout << palavra[i] << " :N" << endl;
        }
    }

    return 0;
}
