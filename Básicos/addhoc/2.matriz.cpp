#include <iostream>
using namespace std;

void printMatrix(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            // O valor em cada posição é o mínimo entre a distância até a borda
            // superior, inferior, esquerda e direita da matriz
            int value = std::max(std::max(i, n - 1 - i), std::max(j, n - 1 - j));
            std::cout << " " << value + 1 << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    cin >> n;
    printMatrix(n);

    return 0;
}
