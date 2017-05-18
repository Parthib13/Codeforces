#include <bits/stdc++.h>
using namespace std;
bool check_equal(string a[], int n)
{
    for(int i = 1;i < n;i++){
        if(a[i] != a[i-1])
            return false;
    }
    return true;
}
bool same(string a[], string temp[],int n)
{
    for(int i = 0;i < n;i++){
        if(a[i] == temp[i])
            continue;
        else
            return false;
    }
    return true;

}
int main()
{
    int n;
    cin>>n;
    string a[n+1], temp[n+1];
    for(int i = 0;i < n;i++){
        cin>>a[i];
        temp[i] = a[i];
    }
    if(check_equal(a, n)){
        cout<<0<<endl;
    }
    for(int moves = 1;;moves++){
        for(int i = 0;i < n;i++){
            a[i] += a[i][0];
            a[i].erase(a[i].begin());
        }
        if(check_equal(a, n)){
            cout<<moves<<endl;
            return 0;
        }
        if(same(a, temp, n)){
            cout<<moves<<endl;
            for(int k = 0;k < n;k++){
                cout<<a[k]<<endl;
            }
            cout<<endl;
            cout<<"-1\n";
            return 0;
        }
        cout<<"MOVE "<<moves<<endl;
        for(int k = 0;k < n;k++){
                cout<<a[k]<<endl;
            }
    }




}
