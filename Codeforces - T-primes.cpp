#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        double rt1 = sqrt(x);
        int rt = ceil(rt1);
        //cout<<rt;
        bool ok = false;int cnt = 1;
        for(int i  = 1;i < x;i++){

            if(x%i == 0){
                cnt++;
            }
            if(cnt > 3){
                cout<<"NO\n";
                ok = true;
                break;
            }
        }
        //cout<<cnt;
        if(cnt == 3 && !ok)
            cout<<"YES\n";
        else if(!ok)
            cout<<"NO\n";
    }
}
