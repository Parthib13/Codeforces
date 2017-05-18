#include <bits/stdc++.h>
using namespace std;
int a[100010], d[100010], n;
int main()
{

    cin>>n;
    for(int i = 0;i < 100000;i++) d[i] = INT_MAX;
    for(int i = 0;i < n;i++){
        cin>>a[i];0
    }
    for(int i = 0;i < n;i++){
        if(a[i] == 0){
            d[i] = 0;

            for(int j = i-1;j >= 0 && a[j] != 0;j--){
                if(d[j] > i-j)
                    d[j] = i-j;
                else break;
            }
            for(int k = i+1;k < n && a[k] != 0;k++){
                if(d[k] > k-i)
                        d[k] = k-i;

                else break;
            }
        }
    }

    for(int i = 0;i < n;i++)
        cout<<d[i]<<" ";

    printf("\n");

}
