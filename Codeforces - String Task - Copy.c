#include <stdio.h>
int main(){
        char a[150], b,c;
        int i, j;
        scanf("%s", a);
        j = strlen(a);
        for(i = 0; i <= j; i++)
        if( a[i] ==  'A'|| a[i] == 'E' || a[i] == 'i' || a[i] == 'O' || a[i] == 'U' || a[i] == 'Y'){
            a[i] = 0;
            a[i]++;
        }
        if(a[i] >= 'B' && a[i]<='D' || a[i] >= 'F' && a[i]<= 'H' || a[i] >= 'J' && a[i] <= 'N' ||a[i] >= 'P' && a[i]<= 'T' || a[i] >= 'V' && a[i]<= 'Z' ){

        }

        printf("%s", a);
}
