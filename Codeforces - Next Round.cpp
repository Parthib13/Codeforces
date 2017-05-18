#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0,t, a, b, i, j, x[100];
    scanf("%d%d", &a, &b);
    for(i = 0;i < a;i++){
        scanf("%d", &x[i]);
    }
    for(j = 0;j < i;j++){
        if(x[j] > 0 && x[j] > b){
            cnt += 1;
        }
    }
    printf("%d", cnt);
}
