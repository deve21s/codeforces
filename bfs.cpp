#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void printlevel(vector<int> graph[], int v, int x)
{
    //arr to sotre level of each node
    int level[v];
    bool marked[v];

    //create a queue
    queue<int> que;
    //enqueue element x
    que.push(x);
    //initialize leave of source node to 0
    level[x] = 0;

    // marked it as visited;
    marked[x] = true;
    while (!que.empty())
    {
        // get the first element of queue
        x = que.front();

        // dequeue element
        que.pop();
        // travese neightbors of node x
        for (int i = 0; i < graph[x].size(); i++)
        {
            // b is neighbor of node x
            int b = graph[x][i];
            // if b is not marked already
            if (!marked[b])
            {
                // enqueue b in queue
                que.push(b);
                //level of b is leave of x+1
                level[b] = level[x] + 1;
                // mark b
                marked[b] = true;
            }
        }
    }
    cout << "Nodes"
         << " "
         << "Level" << endl;
    for (int i = 0; i < v; i++)
    {
        cout << " " << i << " --> " << level[i] << endl;
    }
    cout << "\nlevel";
    for (int i = 0; i < v; i++)
    {
        cout << level[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v = 8;
    vector<int> graph[v];
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(4);
    graph[1].push_back(5);
    graph[2].push_back(5);
    graph[2].push_back(6);
    graph[6].push_back(7);
    printlevel(graph, v, 0);
    for (auto X : graph)
    {
        for (auto x : X)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}
