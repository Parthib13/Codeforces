#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin>>d;
    int sum;
    cin>>sum;
    int a[d+1];
    int b[d+1];
    int cnt = 0;
    int result[d+1];
    for(int i = 0;i < d;i++){
        cin>>a[i]>>b[i];
        cnt+=a[i];
        result[i] = a[i];
    }
    if(cnt == sum){
        cout<<"YES\n";
        for(int i = 0;i < d;i++){
            cout<<result[i];
        }
        return 0;
    }
    if(cnt < sum){
        for(int i = 0;i < d;i++){
            int temp = b[i] - a[i];
            result[i] += temp;
            cnt+=temp;

        }
    }
}
