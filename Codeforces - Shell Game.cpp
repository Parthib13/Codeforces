#include <bits/stdc++.h>
using namespace std;
#define vlong long long
string res = "012102120210201021";
int main()
{
    #ifdef parthibpc
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif // parthibpc
    vlong n, k;
    cin>>n>>k;
    cout << res[n%6 * 3+k] << endl;
}
