#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    string s;
    int len = a.size();
    for(int i = 0;i < len;i++){
        if(b[i] > a[i]){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<b<<endl;
}
