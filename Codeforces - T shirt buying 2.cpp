#include <bits/stdc++.h>

using namespace std;
int a[400100];
int col1[400100];
int col2[400100];
set <int> col[4];

void rmv(int colr, int pr)
{
    auto it = col[colr].find(pr);
    if(it != col[colr].end()){
        col[colr].erase(it);
        cerr << "Success\n";
    }
}
int main()
{

    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];

    for(int i = 0;i < n;i++) cin >> col1[i];

    for(int i = 0;i < n;i++) cin >> col2[i];

    for(int i=0; i<n; i++) {
        col[col1[i]].insert(a[i]);
        col[col2[i]].insert(a[i]);
    }
    int q;
    cin >> q;
    while(q--){
        int tmp;
        cin >> tmp;

        if(col[tmp].empty()){
            cout << -1 << " ";
            continue;
        }
        else{
            cout << *col[tmp].begin() << " ";
            int cur = *col[tmp].begin();
            for(int i = 1;i <= 3;i++){
                rmv(i, cur);
            }
        }
    }
    cout << endl;

}
