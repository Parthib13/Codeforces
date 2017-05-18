#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ara[10010], d[100010];
    set <int> a;
    cin>>n>>m;
    for(int i = 0;i < n;i++)
        cin>>ara[i];

    for(int i = n-1;i >= 0;i--){
        a.insert(ara[i]);
        d[i] = a.size();
    }
    while(m--){
        int temp;
        cin>>temp;
        cout<<d[temp-1]<<endl;
    }
}
