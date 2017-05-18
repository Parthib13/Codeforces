#include <stdio.h>
int main(){
    char  a[150];
    int i, j, flag = 0;

    while(scanf("%s", a) == 1){
    j = strlen(a);
    for(i = 0; i < j; i++){
        if(a[i] == 'H'|| a[i] =='Q'||a[i] == '9'){
            printf("YES\n");
            flag = 1;
            break;
        }
         else{
                flag = 0;
         }

    }
           if(flag == 0)
            printf("NO\n");
    }
            return 0;
}
