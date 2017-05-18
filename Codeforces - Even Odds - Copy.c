#include<stdio.h>
#include<math.h>
int main(){
    long long int n, i, j, k,a,b,c,d;
    double x;
    scanf("%I64d%I64d", &n, &k);
        x = n;
        i = ceil(x/2);
        if(k <= i){
           j = (2*k) - 1;
           printf("%I64d\n", j);
        }
        else if(k > i){
        j =2 * (k-i);
        printf("%I64d\n", j);
        }

}

