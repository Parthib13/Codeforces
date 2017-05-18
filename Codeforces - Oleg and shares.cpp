#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a[100006], k, n, minN= LONG_LONG_MAX, cnt = 0;
    scanf("%lld%lld", &n, &k);
    for(ll i = 0;i < n;i++){
        scanf("%lld", &a[i]);
        minN = min(a[i], minN);
    }
    //cout<<minN<<endl;
    for(ll i = 0;i < n;i++){
        if(a[i] == minN)
            continue;
        else{
            if((a[i] - minN)%k == 0){
                cnt += (a[i]-minN)/k;
            }
            else{
                printf("-1\n");
                return 0;
            }
        }
    }
    printf("%lld\n", cnt);


}
