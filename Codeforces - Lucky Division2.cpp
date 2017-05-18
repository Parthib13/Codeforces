#include <bits/stdc++.h>
int main()
{
    int a;
    int i, j, n,p,r;
    scanf("%d", &a);
    for(i = 0;;i++){
    while(a != 0){
        r = a%10;
        if(r == 4 || r == 7){
            n++;
        }
        a = a/10;
    }
    }
    if(n == i){
        printf("YES\n");
    }
    else if(a%4 == 0 || a%7==0){
        printf("YES\n");
    }
    else
        printf("NO\n");
}
