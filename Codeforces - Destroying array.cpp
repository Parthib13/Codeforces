#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[100010], d[100010], n;
int maximum_sum(int x)
{
    vector <int> v;
    a[x-1] = -1;
    int sum = 0, mid, lo = 0;
    for(int i = 0;i < n;i++){
        if(i == n-1&& a[i] == -1){
            v.push_back(sum);
            break;
        }
        else if(i == n-1 && a[i] != -1){
            sum+=a[i];
           // cout<<"sum = "<<sum<<endl;
            v.push_back(sum);
            break;
        }
        if(a[i] == -1){
            v.push_back(sum);
            sum=0;
         }
         else{
            sum+=a[i];
            //cout<<"sum = "<<sum<<endl;
         }

    }
    return *max_element(v.begin(), v.end());

}
int main()
{
    cin>>n;
    for(int i = 0;i  < n;i++)
        cin>>a[i];
    int k = n;
    while(k--){
        int temp;
        cin>>temp;
        cout<<maximum_sum(temp)<<endl;
    }
}
