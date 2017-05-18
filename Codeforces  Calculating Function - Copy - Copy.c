#include <stdio.h>

    int main(){
       long long int sum =0,a,i;
        while(scanf("%lli", &a) != EOF){

           if(a%2==0){
            sum = a/2;
            printf("%lli\n", sum);
           }
           else
           {
               sum = a/2;
               sum -= a;
               printf("%lli\n", sum);
           }

        }
            return 0;
        }
