#include <stdio.h>
int main(){
    long long int a[100000],i,j,b, temp = 0;
    scanf("%lli", &a);
    b = strlen(a);

    for(i = 1; i < b; i++){
        if(a[i] == 4 || a[i] == 7){
             temp += 1;
             printf("%i", temp);




     if(temp == 4 || temp == 7){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        }
    }
}
