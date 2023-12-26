#include <iostream>
#include <utility>

using namespace std;


int main()
{
    pair <string, int> p ("Hello", 1);
    string x = p.first;
    int y = p.second;
    cout << x << " " << y << endl;

    std::pair<std::string, std::pair<int, int>> p2("Hello", {1, 2});

    // Atribuições corretas
    x = p2.first;
    y = p2.second.first;  // Acessa o primeiro elemento do segundo par
    int z = p2.second.second; // Acessa o segundo elemento do segundo par

    std::cout << x << " " << y << " " << z << std::endl;
    return 0;
}

