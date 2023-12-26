#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    int matriz[10][10];
    int topo, fe, fd;
    cin >> n;

    while (n--){
        
    memset(matriz, -1, sizeof(matriz));
    for (int i = 0; i < 9; i+=2)
    {
        for (int j = 0, k = 0; j <= (i/2); j++, k+=2)
        {
            cin >> matriz[i][k];
        }
        }


    for (int i = 0; i < 8; i+=2){
        for (int j = 0, k = 0; j <= (i/2); j++,k+=2){
            topo = matriz[i][k];
            fe = matriz[i+2][k];
            fd = matriz[i+2][k+2];
            matriz[i+2][k+1] = ((topo-fe-fd)/2);
            matriz[i+1][k] = fe + matriz[i+2][k+1];
            matriz[i+1][k+1] = matriz[i+2][k+1]+fd;
        }
    }
    int i, j;
    for (i=0; i<9;i++){
        for(j=0;j<i;j++){
            cout << matriz[i][j] << " ";
       }
       cout << matriz[i][j] << endl;
    }

    }
    return 0;

}