#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n&1){
        cout<<(n-3)/2 + 1<<endl;
        int lim = (n-3)/2;
        while(lim--){
            cout<<2<<" ";
        }
        cout<<3<<endl;
        return 0;
    }
    else{
        cout<<n/2<<endl;
        int lim = n/2;
        while(lim--){
            cout<<2<<" ";
        }
        cout<<endl;
        return 0;
    }
}
