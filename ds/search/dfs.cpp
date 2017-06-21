#include <iostream>
#include <list>
 
using namespace std;
 
class Graph
{
    int V;	
    list<int> *adj;	
    void DFSUtil(int v, bool visited[]);  

public:
    Graph(int V); 
    void addEdge(int v, int w);   
    void DFS(int v); 
    void SP();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";
 	
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
void Graph::DFS(int v)
{
    bool *visited = new bool[V];
    for (int i = 1; i < V; i++)
        visited[i] = false;

    DFSUtil(v, visited);
}
 
void Graph::SP()
{

while(!Q.empty()) {
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
    for(int v = 0; v < V; ++v){
        if(dist[v] != INF){
            printf("%d -> %d: %d\n", s, v, dist[v]);
        }else{
            printf("%d -> %d: NP\n", s, v);
        }
    }

    for(int v = 0; v < V; ++v){
        printf("V of %d: %d\n", v, parent[v]);
    }

    int node;
    printf("shortest %d to:\n", s);
    cin >> node;
    if(dist[node] != INF)
        findPath(s, node, parent);
    else
        printf("NA");

}

int main(int argc, const char * argv[])
{
    Graph g(8);  
//	cout << "static order: 8\n";

	g.addEdge(1, 3); // reference to the function
	g.addEdge(1, 6);
	g.addEdge(2, 3);
	g.addEdge(2, 4);
	g.addEdge(2, 5);
	g.addEdge(5, 3);
	g.addEdge(4, 5);
	g.addEdge(4, 6);
	g.addEdge(6, 5);

	cout << "DFS()\n";

//	cout << "starting from vertice 5\n";
//    g.DFS(5);
//	cout << "\n";
//	cout << "starting from vertice 3\n";
//	g.DFS(3);
//	cout << "\n";
//	cout << "starting from vertice 1\n";
//	g.DFS(1);
//	cout << endl;
	cout << "starting from vertice 2 (target: 6)\n";
	g.DFS(2);
//	cout << endl;
//	cout << "starting from vertice 4\n";
//	g.DFS(4);
//	cout << endl;
//	cout << "starting from vertice 6\n";
//	g.DFS(6);
	cout << endl;

    return 0;
}
