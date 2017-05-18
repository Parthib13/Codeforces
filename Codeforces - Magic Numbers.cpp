#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int len     =a.size();
    for(int i = 0;i < len;i++){
        char temp = a[i];
        if(temp != '1'&& temp != '4'){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
