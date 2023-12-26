#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string nomes[n];
    int problemas[n];
    int menor_qtdd_problemas = 11;

    int instancia = 0;

    for (int i = 0; i < n; i++) {
        cin >> nomes[i] >> problemas[i];

        if (problemas[i] < menor_qtdd_problemas) {
            menor_qtdd_problemas = problemas[i];
            instancia = i;
        }


        else if (problemas[i] == menor_qtdd_problemas && nomes[i] > nomes[instancia]) {
            instancia = i;
        }
    }

    cout << "Instancia " << instancia + 1 << endl;
    cout << nomes[instancia] << endl;

    return 0;
}
