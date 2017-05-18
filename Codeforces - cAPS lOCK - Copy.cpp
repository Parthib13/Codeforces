#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000];
    int i,j,k, flag = 0,p;
    scanf("%s", a);
    k = strlen(a);
    for(i = 0; i < k;i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            flag++;
        }
    }

    if(flag == k){
        for(p = 0;p < k;p++){
        a[p] = tolower(a[p]);
        }
        printf("%s", a);
    }

    else if(a[0] >= 'a' && a[0] <= 'z' && flag == k-1){
        for( j = 1;j < k;j++){
        a[j] = tolower(a[j]);
        a[0] = toupper(a[0]);
    }
        printf("%s", a);
    }
    else if(flag == k){
        printf("%s", a);
    }
    else if(a[0] >= 'A' && a[0] <= 'Z' && flag == 1){
        printf("%s", a);
    }
    else
        printf("%s", a);

}
