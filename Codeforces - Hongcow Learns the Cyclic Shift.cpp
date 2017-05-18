#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    string b = a;
    //cout<<b;
    int len = a.size(), cnt = 1;//cout<<len;
    //char x = a[0];
    for(int i = 0;i < len;i++){
            char x = a[len-1];
        for(int j = len-1;j >0;j--){
            a[j] = a[j-1];

        }

        a[0] = x;
        //cout<<"\na -----> "<<a<<endl;
        if(a == b){
            cout<<cnt<<endl;
            return 0;
        }
        cnt++;
    }
}
