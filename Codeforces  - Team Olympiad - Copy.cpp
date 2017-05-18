#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int p = 0, m = 0, e = 0;
    for(int i = 0;i < n;i++){
        cin>>a[i];
        if(a[i] == 1)
            p++;
        if(a[i] == 2)
            m++;
        if(a[i] == 3)
            e++;
    }
    int w = min(min(p, m), e);
    if(w == 0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<w<<endl;
    for(int i = 0;i < w;i++){

        for(int j = 0;j < n;j++){
            if(a[j] == 1){
                cout<<j+1<<" ";
                a[j] = -1;
                break;
            }
        }
        for(int j = 0;j < n;j++){
            if(a[j] == 2){
                cout<<j+1<<" ";
                a[j] = -1;
                break;

            }
        }
        for(int j = 0;j < n;j++){
            if(a[j] == 3){
                cout<<j+1<<" ";
                a[j] = -1;
                break;
            }
        }
        cout<<endl;
    }

}
