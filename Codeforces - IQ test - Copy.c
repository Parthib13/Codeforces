#include <stdio.h>
int main(){
     int i,a[1000], p, c = 0, d= 0;
     scanf("%d", &p);
    for(i = 1;i <= p; i++){
    scanf("%i", &a[i]);
    if(a[i] % 2 == 0)
    c++;
    else
    d++;
}
 if(c > d){
    for(i = 1; i <= p; i++){
        if(a[i] % 2 != 0){
        printf("%i\n", i);
        break;
        }
    }
 }
 else{
    for(i = 1; i <= p; i++)
        if(a[i] % 2 == 0){
        printf("%i\n", i);
        break;
        }
 }
    return 0;
}
