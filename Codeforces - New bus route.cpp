#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int res = INT_MAX, cnt = 0;
    cin>>a[0]>>a[1];
    res = abs(a[0] - a[1]);
    for(int i = 2;i < n;i++){
        cin>>a[i];
        int temp = res;
        res = min(abs(a[i] - a[i-1]), res);
        if(res != temp){
            cnt = 0;
        }
        cnt++;
    }
    cout<<res<<cnt<<endl;


}
