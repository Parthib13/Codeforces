#include <bits/stdc++.h>
using namespace std;
typedef long long vlong;
#define MAX 1e19
#define phl cout<<"HELLO WORLD\n";
typedef pair < vlong, int > pvi;

vector < pair<vlong, int> > adj[100007];
void dijkstra(int n, int src, int dst)
{
    vector < vlong > d(n+1, MAX);
    vector < vlong > s(n+1, -1);
    d[src] = 0;
    s[src] = src;

    priority_queue <pvi, vector <pvi>, greater <pvi> > heap;
    heap.push(make_pair(0LL, src));

    while(!heap.empty()){
        pvi U = heap.top();
        heap.pop();

        vlong u = U.second, min_ind = adj[u].size();

        for(int i = 0;i < min_ind;i++){

            vlong v = adj[u][i].second;
            vlong dt = adj[u][i].first;

            if(d[v] > d[u] + dt){
                d[v] = d[u] + dt;
                s[v] = u;
                heap.push(make_pair(d[u] + dt, v));
            }
        }
    }
    vector <int> ans;
    ans.push_back(dst);
    int now = dst;
    while(now != s[now] && now != -1){
        now = s[now];
        ans.push_back(now);
    }
    int len = ans.size();
    for(int i = len - 1;i >= 0;i--){
        cout<<ans[i]<<" ";
        if(ans[i] == -1){
            break;
        }
    }
}
int main()
{
    #ifdef parthibpc
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif // parthibpc
    vlong n, m;
    scanf("%lld %lld", &n, &m);
    while(m--){
        vlong u, v, w;
        scanf("%lld %lld %lld", &u, &v, &w);
        adj[v].push_back(make_pair(w, u));
        adj[u].push_back(make_pair(w, v));
    }
    dijkstra(n, 1, n);

    return 0;
}
