#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, flag = 0;
    cin>>x>>y;
    char a[x+1][y+1];
    for(int i = 0;i < x;i++){
        for(int j = 0;j < y;j++){
            cin>>a[i][j];
            if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y'){
                flag = 1;
            }
        }
    }
    if(flag == 1){
        cout<<"#Color\n";
        return 0;
    }
    cout<<"#Black&White\n";
}
