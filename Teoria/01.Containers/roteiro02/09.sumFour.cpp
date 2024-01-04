#include <algorithm>
#include <vector>
#include <cstdio>

#define MAX 4000

typedef std::vector<int>::iterator vecIt;
typedef std::pair<vecIt, vecIt> pairIt;


using namespace std;

int main (){
    vector <int> a,b,c,d,ab,cd;
    int n, nn;
    a.resize(MAX);b.resize(MAX);c.resize(MAX);d.resize(MAX);
    ab.resize(MAX*MAX);cd.resize(MAX*MAX);
    for (;;){
        if(scanf("%d", &n)!=1){
            break;
            
        }
        nn = n*n;
        for (int i = 0; i < n; ++i)
            scanf("%d%d%d%d", &a[i], &b[i],&c[i],&d[i]);
        
    for (int i=0, p=0; i < n; i++){
        for(int j=0; j < n; j++, p++){
            ab[p]=a[i]+b[j];
            cd[p]=c[i]+d[j];
        }
    }

    sort(cd.begin(), cd.begin()+nn*nn);

    int count = 0;
    for (int i = 0; i < nn; i++){
        pairIt it = equal_range(cd.begin(), cd.begin() + nn, -ab[i]);
        if(it.first != cd.end()){
            count += it.second - it.first;
        }
        
    }
    printf("%d\n", count);

    }


    return 0;
}