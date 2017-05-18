#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0,x,k, n, w, i, sum=0;
    scanf("%d %d %d", &k, &n, &w);
    for(i = 1;i <= w;i++){
        x = k*i;
        sum +=  x;
        x = 0;
    }
    ans = sum - n;
    if(ans <= 0){
        printf("0");
    }
    else
    printf("%d\n", ans);
}
