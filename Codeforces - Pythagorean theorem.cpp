#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    ll n, cnt = 0;
    cin>>n;
    for(ll i = 1;i <= n;i++){
        for(ll j = i;j <= n;j++){
            ld x = sqrt(i*i+j*j);
            if(x == (int)x && x <= n){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
