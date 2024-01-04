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
    /*Usamos a seguinte estrutura quando queremos pegar valores e já realizamos várias operações,
    o primeiro scanf serve para pegarmos o tamanho,
    O segundo for pega os valores
    O terceiro irá realizer as operações
    A operação realizada é a de soma todos valores de um vetor com todos os valores possíveis de outro vetor
    O programa continua lendo pares de valores (a, b, c, d) até que não seja possível ler um valor inteiro.
    Para cada conjunto de pares, ele calcula todas as combinações possíveis das somas de elementos de a e b (armazenadas em ab) e as somas de elementos de c e d (armazenadas em cd).
    Em seguida, ordena o vetor cd.
    Utiliza a função equal_range para encontrar o intervalo de ocorrências da soma negativa dos elementos em ab.
    Acumula a contagem de ocorrências.
    Imprime o resultado.*/
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