#include <bits/stdc++.h>
using namespace std;
int Fact[1000006], nfact;

void work(int n)
{
    for(int i = 2; i*i <= n; i++)
        if(n%i == 0)
            while(n%i == 0)
            {
                Fact[nfact++] = i;
                n /= i;
            }
    if(n > 1) Fact[nfact++] = n;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    work(n);
    if(nfact < k){
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i = 0;i < k-1;i++){
        cout<<Fact[i]<<" ";
    }
    int ans = 1;
    for(int i = k-1;i < nfact+1;i++){
        if(Fact[i] == 0)
            continue;
        else
            ans*=Fact[i];
    }
    cout<<ans<<endl;
}
