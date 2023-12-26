#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
    int n, k, i, j;
    int fe, topo, fd;
    int matriz[10][10];

    cin >> n;

    while (n--)
    {
        memset(matriz, -1, sizeof(matriz));
        for (i = 0; i <= 8; i += 2)
            for (j = 0, k = 0; j <= (i / 2); j++, k += 2)
                cin >> matriz[i][k];

        for (i = 0; i < 8; i += 2)
        {
            for (j = 0, k = 0; j <= (i / 2); j++, k += 2)
            {
                topo = matriz[i][k];
                fe = matriz[i + 2][k];
                fd = matriz[i + 2][k + 2];
                matriz[i + 2][k + 1] = ((topo - fe - fd) / 2);
                matriz[i + 1][k] = fe + matriz[i + 2][k + 1];
                matriz[i + 1][k + 1] = matriz[i + 2][k + 1] + fd;
            }
        }

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < i; j++)
                cout << matriz[i][j] << " ";

            cout << matriz[i][j] << endl;
        }
    }

    return 0;
}
