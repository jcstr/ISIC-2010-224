#include <bits/stdc++.h>
#include <list>
#include <stack>

using namespace std;

class Graph {

private:
    int V; 
    vector <list<int>> adjList;
    int INF;
public:
    Graph(int const &V);
    void addEdge(int const &u, int const &v);
    void BFS(int const &s);
};

Graph::Graph(int const &V)
{
    this -> V = V;
    adjList.resize(V);
    this->INF =  V * (V - 1) / 2;
    cout << "P. C.: " << INF << endl << endl;
}

void Graph::addEdge(int const &u, int const &v)
{
    adjList[u].push_back(v);
}

void findPath(int const &startNode, int const &endNode, int* &parent)
{
    if( startNode == endNode || endNode == -1) {
        printf("%d\n", startNode);
    } else {
        findPath(startNode, parent[endNode], parent);
        printf("%d\n", endNode);
    }
}

void Graph::BFS(int const &s)
{

    int *dist = new int[V];
    int *parent = new int[V];


    for (int v = 0; v < V; ++v) 
    {
        dist[v] = INF;
        parent[v] = -1;
    }

    dist[s] = 0;
    queue<int> Q;
    Q.push( s );


    while( !Q.empty() ) {
        int u = Q.front();
        Q.pop();

        cout << u << " ";

        list<int>::iterator it;
        for(it = adjList[u].begin(); it != adjList[u].end(); ++it){
            if( dist[*it] == INF ){
                Q.push(*it);
                dist[*it] = dist[u] + 1;
                parent[*it] = u;
            }
        }
    }

    printf("\n");
    for(int v = 0; v < V; ++v) {
        if(dist[v] != INF){
            printf("%d -> %d: %d\n", s, v, dist[v]);
        } else {
            printf("%d -> %d: NP\n", s, v);
        }
    }

    for(int v = 0; v < V; ++v) {
        printf("V %d: %d\n", v, parent[v]);
    }

    int node;
    printf("buscar el camino mas corto desde el nodo %d a: ", s);
    cin >> node;
    if(dist[node] != INF)
        findPath(s, node, parent);
    else
        printf("no hay caminos\n");
}

int main() { 
    
    // Graph *g = new Graph(8);
    Graph g(10);

    g.addEdge(1, 3); // reference to the function
    g.addEdge(1, 6);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(5, 3);
    g.addEdge(5, 2);
    g.addEdge(4, 5);
    g.addEdge(4, 6);
    g.addEdge(6, 5);

    cout << "BFS(): \n" << endl;
    int node = 4;
    g.BFS(node);
    
    return 0;
}
