#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

#define MAXSIZE 35

bool visitados[MAXSIZE];
bool adj[MAXSIZE][MAXSIZE];
std::vector<char> vertices;

int m, n;

void dfs(int);
int compara(const void *, const void *);

int main()
{
    char a, b;
    int i, j, casos;
    int caso = 0;

    std::cin >> casos;

    while (casos--)
    {
        std::cin >> m >> n;

        for (i = 0; i < n; ++i)
        {
            std::cin >> a >> b;
            adj[a - 'a'][b - 'a'] = true;
            adj[b - 'a'][a - 'a'] = true;
        }

        std::cout << "Case #" << ++caso << ":\n";
        int ans = 0;
        for (i = 0; i < m; ++i)
        {
            if (!visitados[i])
            {
                ++ans;
                dfs(i);
                std::sort(vertices.begin(), vertices.end());
                for (char v : vertices)
                    std::cout << v << ',';

                std::cout << std::endl;
            }

            vertices.clear();
        }

        std::cout << ans << " connected components\n\n";
        std::memset(visitados, false, sizeof(visitados));
        std::memset(adj, 0, sizeof(adj));
    }

    return 0;
}

void dfs(int u)
{
    int i;
    visitados[u] = true;
    vertices.push_back(u + 'a');
    for (i = 0; i < m; ++i)
        if (adj[u][i])
            if (!visitados[i])
                dfs(i);
}

int compara(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}
