#include <iostream>
#include <queue>
#include <math.h>


using namespace std;

int main(){
    int tests, n, k, p;
    cin >> tests;
    queue <int> power;
    int forca_vencedor ;
                int forca_perdedor;
                int indice_vencedor;
                
    while (tests > 0){
        cin >> n >> k;
        priority_queue<pair<int, int>>participantes;
        for (int i = 0; i < pow(2,n); i++){
            cin >> p;
            participantes.push({p,i+1});
        }
        while (participantes.size()>1){
            priority_queue<pair<int,int>> proxima_rodada;
            while(!participantes.empty()){
                auto c1 = participantes.top();
                participantes.pop();

                auto c2 = participantes.top();
                participantes.pop();

                forca_vencedor = max(c1.first, c2.first);
                forca_perdedor = min(c1.first, c2.first);
                indice_vencedor;
                if (forca_vencedor == c1.first){
                    indice_vencedor = c1.second;
                } else{
                    indice_vencedor = c2.second;
                }
                

                forca_vencedor = min(forca_perdedor + k, forca_vencedor);
                
                proxima_rodada.push({forca_vencedor, indice_vencedor});
            }
            
        }
    tests --;
    }
    return 0;
}