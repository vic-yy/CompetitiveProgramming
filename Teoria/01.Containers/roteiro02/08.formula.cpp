#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Formula {
private:
    int numCompetidores;
    vector<int> startGrid;
    vector<int> finishGrid;
public:
    Formula(){

    }
    void readTest();
    int calculaUltrapassagens();
};

void Formula::readTest(){
    int tam = 0;
    cin >> numCompetidores;
    startGrid.resize(numCompetidores);
    finishGrid.resize(numCompetidores);
    for (int i = 0; i < numCompetidores; ++i){
        cin >> startGrid[i];
    }
    for (int i = 0; i < numCompetidores; ++i){
        cin >> finishGrid[i];
    }

}

// int Formula::calculaUltrapassagens(){
//     int ultrapassagens = 0;
//     for (int i = 0; i < numCompetidores - 1; i++){
//         for (int j = i + 1; j < numCompetidores; j++){
//             if (startGrid[i] == finishGrid[j]){
//                 swap(finishGrid[i], finishGrid[j]);
//                 ultrapassagens += j - i;
//                 break;
//             }
//         }
//     }
//     return ultrapassagens;
// }


int Formula::calculaUltrapassagens(){
    int ultrapassagens = 0;
    for (int i = 0; i < numCompetidores; i++){
        for (int j = i; j < numCompetidores; j++){
            if (startGrid[j] == finishGrid[i]){
                while(j > i){
                swap(startGrid[j], startGrid[j-1]);
                ultrapassagens ++;
                --j;
                }
                break;
            }
        }
    }
    return ultrapassagens;
}

int main(){
    Formula corrida;
    while(true){
        corrida.readTest();
        
        if(cin.eof()){
            break;
        }
        int overtakes = corrida.calculaUltrapassagens();
        cout  << "!" <<overtakes << "!" << endl;
    }
    return 0;
}