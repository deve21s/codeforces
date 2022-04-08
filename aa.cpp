#include<bits/stdc++.h>
#include<string>
using namespace std;
# define INF 0x3f3f3f3f

int source, dest;
map<int, int>m;
class Graph
{
    int V;

    list< pair<int, int> > *adj;

public:
    Graph(int V);

    void addEdge(int u, int v, int w);

    void shortestPath(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list< pair<int, int> >[V];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
void Graph::shortestPath(int src)
{
    set< pair<int, int> > setds;

    vector<int> dist(V, INF);

    setds.insert(make_pair(0, src));
    dist[src] = 0;

    while (!setds.empty())
    {
        pair<int, int> tmp = *(setds.begin());
        setds.erase(setds.begin());

        int u = tmp.second;

        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight)
            {
                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }
    for (int i = 0; i < V; ++i)
        if (i == m[dest]) {
            cout << dist[m[dest]];
        }
}

int main() {
    int V;
    cin >> V;
    Graph g(V);
    //
    for (int i = 0; i < V; i++) {
        int x = 0; cin >> x;
        m[x] = i;
    }
    int e; cin >> e;
    for (int i = 0; i < e; i++) {
        int x, y, wt;
        cin >> x >> y >> wt;
        g.addEdge(m[x], m[y], wt);
    }

    cin >> source >> dest;
    if (source == dest) {
        cout << 0;
        return 0;
    }
    g.shortestPath(m[source]);

    return 0;
}