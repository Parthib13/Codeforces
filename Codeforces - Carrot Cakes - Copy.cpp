#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int ans1;

    if(n % k == 0){
        ans1 = (n/k)* t;
    }
    else{
        ans1 = (n/k + 1)* t;
    }

    int time1 = 0, time2 = 0, l = 0, ck1 = 0, ck2 = 0;

    while(1){
        l++;

        if(l >= t &&l % t == 0){
            ck1 += k;
        }

        if(l >= t && l > d && (l-d) % t == 0){
            ck1 += k;
        }


        if(ck1 >= n){
            break;
        }

    }
    //cerr << ans1 << endl << l << endl;
    if(ans1 <= l){
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
}
