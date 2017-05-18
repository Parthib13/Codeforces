#include <stdio.h>

int main(){
    char a[200];
    int i,j;
    scanf("%s", a);
    j = strlen(a);
    for(i = 0; i <= j; i++){
        if(a[i] == 'C' && a[i] == 'O' && a[i] == 'D' && a[i] == 'E' && a[i] == 'F' && a[i] == 'O' && a[i] == 'R' && a[i] == 'C' && a[i] == 'E' && a[i] == 'S'){
        printf("Yes\n");
        }
        else
            printf("NO\n")
;    }
}

