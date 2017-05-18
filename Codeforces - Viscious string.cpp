#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int len = a.size();
    int flag = 0;
    for(int i = 0;i < len-1;i++){
        if(a[i]== 'V' && a[i+1] == 'V' && a[i+2] != 'K'){
            flag = 1;
            break;
        }
        else if(a[i] == 'K' && a[i+1] == 'K'){
            if(a[i-1] != 'V'){
                flag = 1;
                break;
            }
        }

    }
    int cnt = 0;
    for(int i = 0;i < len-1;i++){
        if(a[i] == 'V' && a[i+1]== 'K'){
            cnt++;
        }
    }
    if(flag == 1){
        cout<<cnt+1<<endl;
        return 0;
    }
    else
        cout<<cnt<<endl;
    return 0;

}
