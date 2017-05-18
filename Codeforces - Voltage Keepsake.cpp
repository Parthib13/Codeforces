#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100100], b[100100], n, p;
int main()
{
    #ifdef parthibpc
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif // parthibpc
    cin>>n>>p;
    ll charge = 0;
    for(int i = 0;i < n;i++){
        cin>>a[i];
        cin>>b[i];
        charge += a[i];
    }
    if(charge <= p){
        cout<<"-1\n";
        return 0;
    }

    ll cnt = 0;
    double hi = 1e10 + 10, lo = 0, mid;
    while(cnt < 100){
        cnt++;
        mid = (hi+lo)/2;
        double x = 0;
        for(ll i = 0;i < n;i++){
            double temp = (a[i] * mid)-b[i];
            if(temp <= 0){
                temp = 0;
            }
            x += temp;
        }
        if(x > p*mid){
            hi = mid;
        }
        else{
            lo = mid;
        }
    }
    printf("%.8lf\n", lo);
    return 0;


}
