#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, p,a,b,flag =0;
    scanf("%d%d", &a, &b);
    for(i = 1;i <= a;i++){
        for(j = 0;j < b;j++){
            if(i%2 != 0){
                cout << "#";
            }
            else if(i%2 == 0 && flag == 0){
                if(j<b-1)
                cout<< ".";
                else
                    cout<< "#";
                    flag = 1;
            }
            else if(i%2 == 0 && flag == 1){
                if(j == 0)
                cout<< "#";
                else
                    cout<< ".";
                    flag = 0;
            }
        }
        printf("\n");
    }
}
