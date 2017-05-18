#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, happy = 0;
    cin>>n;
    int a[n+1];
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i = 1;i < n;i++){
        if(a[i] > a[i-i]){
            happy++;
        }
    }
    cout<<happy<<endl;
}
