#include <stdio.h>

int main(){
    int max, min, a, b,c, d, e = 0;
        scanf("%d%d", &a,&b);
        while(c>d){
        c = max(a,b);
        d = min(a,b);
        a = a - b;
        e++;
        }
        printf("%i\n", e);



}
