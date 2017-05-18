#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll INF = 1e19;
h
vector<pair<int,int> > adj[100010];

void dijkstra(int n, int src, int dst)
{
    vector<ll> dist(n+1,INF);
    dist[src] = 0;

    vector<int> p(n+1,-1);
    p[src] = src;

    priority_queue<pair<ll,int> > Heap;
    Heap.push(make_pair(0LL,src));

    while(!Heap.empty())
    {
        pair<int,int> U = Heap.top();
        Heap.pop();
        int u = U.second, lim = adj[u].size();

        for(int i = 0; i < lim; i++)
        {
            ll v = adj[u][i].second, w = adj[u][i].first;
            if(dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                p[v] = u;
                Heap.push(make_pair(dist[v],v));
            }
        }
    }
    //for(int i = 0; i <= n; i++) cout << i << " -> " << dist[i] << endl;

    vector<int> path;
    path.push_back(dst);
    int now = dst;
    while(now != p[now] && now != -1)
    {
        now = p[now];
        path.push_back(now);
    }
    int lim = path.size();
    for(int i = lim-1; i >= 0; i--)
        cout << path[i] << " ";
}

int main()
{
    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(w,v));
        adj[v].push_back(make_pair(w,u));
    }
    dijkstra(n,1,n);
    return 0;
}
