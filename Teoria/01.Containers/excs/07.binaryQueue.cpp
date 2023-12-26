#include <iostream>
#include <queue>
#include <math.h>


using namespace std;

int binarySearch(int *array, int l, int r, int x){
    while (l <= r){
        int m = l + (r - l)/2;
        if (array[m] == x){
            return m;
        }
        else if (array[m] < x){
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

int main(){
    int tam, nQuerie, i = 0, querie, result;
    cin >> tam >> nQuerie;
    int array[tam];
    while (tam > 0){
        cin >> array[i];
        i++;
        tam--;
    }
    while(nQuerie > 0){
    cin >> querie;
    result = binarySearch(array, 0, i-1, querie);
    cout << result << endl;
    nQuerie --;
    }
    return 0;
}