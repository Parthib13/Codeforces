#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000];
    int i, j, n=0;
    scanf("%s", a);
    j = strlen(a);
    for(i = 0;i < strlen(a);i++){
        if(a[i] == '4' || a[i] == '7')
            n+=1;
    }
    if(n == j){
        printf("YES\n");
    }
    else
        printf("NO\n");
}
