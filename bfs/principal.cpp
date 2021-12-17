#include "BFS.hpp"

using namespace std;

int main()
{
    int n,m,x1,x2,v,b,p;
    cin >> n;
    cin >> m;
    cin >> b;
    cin >> v;
    BFS grafo(n);
    for (int i = 0; i < m; i++) {
        cin >> x1;
        cin >> x2;
        cin >> p;
        grafo.Aresta_ADD(x1-1,x2-1,b,p);
    }  
    grafo.Busca_bfs(v-1);
	return 0;
}