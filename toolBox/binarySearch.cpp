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
    int n = 0;
    int array[12] = {0, 1, 2, 3, 4,5,6,7,8,9,10,11};
    while (n!= -1){
        int x;
        cin >> x;
        cout << binarySearch(array, 0, 12-1, x)+1 << endl;
    }
}