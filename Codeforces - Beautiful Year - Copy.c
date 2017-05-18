#include <bits/stdc++.h>
#include <stdio.h>
int main()
{
    int  i, j, b, flag = 0;
    char a[100];
    scanf("%s", a);
    for(int k = 0;k <= strlen(a); k++){
        a[k] = a[k] - '0' +0;
    }
    for(i = 0;i <= strlen(a); i++){
        for(j = 1;j <= strlen(a);j++){
            if(a[i] == a[j]){
                flag++;
            }
        }
    }
    if(flag != 0){
        printf("Yes");
    }
    else
        printf("No");



    }


