#include <bits/stdc++.h>
#include <stdio.h>
int main(){
    int t;
    scanf("%d", t);
    while(t--){
    int a, b, c, d, e;
    char x[1000];

    scanf("%s", x);
    a = strlen(x);
    c = a - 1;
    b = a - 2;
    printf("%c%d%c\n", x[0], b, x[c]);
    }
}
