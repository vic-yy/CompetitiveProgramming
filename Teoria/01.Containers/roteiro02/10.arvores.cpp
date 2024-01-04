#include <iostream>
#include <map>
#include <string>
#include <iomanip>

#define Quantidade 10000

int main() {
    std::map<std::string, double> trees;
    std::map<std::string, double>::iterator it;

    std::string tree;
    int cases, i, total = 0;

    std::cout << std::fixed << std::setprecision(4);
    std::cin >> cases;
    std::cin.ignore(); // Ignore the newline character after cases

    for (i = 1; i <= cases; i++) {
        while (getline(std::cin, tree) && tree[0] != '\0') {
            trees[tree]++;
            total++;
        }

        if (i > 1) {
            std::cout << "\n";
        }

        for (it = trees.begin(); it != trees.end(); it++) {
            std::cout << it->first << " " << 100.0 * it->second / total << std::endl;
        }

        total = 0;
        trees.clear();
    }

    return 0;
}
