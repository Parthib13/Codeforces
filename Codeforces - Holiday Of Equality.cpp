#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[110], n, sum = 0;

    cin>>n;

    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    //cout<<a[0];

    for(int i = n-2;i > -1;i--){
        sum += a[n-1]-a[i];
    }
    cout << sum<<endl;
}
