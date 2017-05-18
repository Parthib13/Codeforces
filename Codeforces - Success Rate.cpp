#include <bits/stdc++.h>
using namespace std;
typedef long long vlong;
vlong cnt = 0;
bool ok = false;
void solve(vlong x, vlong y, vlong p, vlong q)
{
    if(ok)
        return;
    vlong g = __gcd(x, y);
    vlong t1 = x/g;
    vlong t2 = y/g;
    cerr << "x = " << x << "y = " << y << endl;
    if(cnt == 11){
        return;
    }
    if(t1 == p && t2 == q){
        ok = true;
        return;
        //cerr << cnt << endl;
    }
    else{
        cnt++;
        solve(x+1, y+1, p, q);
        solve(x, y+1, p, q);
    }
}
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        vlong x, y, p, q;
        cin >> x >> y >> p >> q;
        solve(x, y, p, q);
        cout << cnt << endl;
    }
}
