#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001][5];
    int n;
    cin>>n;
    bool flag = false;
    int s1 = -1, s2 = -1;
    for(int i = 0;i < n;i++){
        for(int j = 0; j < 5;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        if((a[i][0] == a[i][1] && a[i][0] == 'O')){
            flag = true;
            a[i][0] = '+';
            a[i][1] = '+';
            break;
        }
        else if((a[i][3] == a[i][4] && a[i][3] == 'O')){
            flag = true;
            a[i][3] = '+';
            a[i][4] = '+';
            break;
        }
    }
    if(flag == true){
        cout<<"YES\n";
        for(int i = 0;i < n;i++){
            for(int j = 0; j < 5;j++){
                cout<<a[i][j];
            }
            cout<<endl;
    }

        return 0;
    }
    cout<<"NO\n";
}
