// Qual a motivação?
// Para a resolução de problemas, os grafos podem ser usados como uma abstração de um problema
// facilitando a resolução.

// Com frequência, problemas podem não terem relação direta a ideia de um grafo, mas 
// podem ser modelados como um grafo para facilitar a resolução.


// Grafico não direcionado: par de conjuntos G = (V, E), onde V é um conjunto de vértices e E é um conjunto de arestas.
// Cada aresta é um par não ordenado de vértices (u, v) ∈ V, onde u e v são chamados de extremidades da aresta.
// A aresta (u, v) é dita incidente aos vértices u e v, e dizemos que u e v são adjacentes.  

// Ex.:   0  -  1 -  2
//        |     |
//        3  -  4
// Temos que V = {0, 1, 2, 3, 4} e E = {(0, 1), (0, 3), (1, 2), (1, 4), (3, 4)}


// Caminho: Um caminho de um vértice u para um vértice v é uma sequência de arestas que conecta u a v.
// Um caminho P de x0 para xk é um grafo não vazio da forma V = {x0, x1, ..., xk} e E = {(x0, x1), (x1, x2), ..., (xk-1, xk)}
// em que todos os xj são distintos. O comprimento de P é k, o número de arestas em E.