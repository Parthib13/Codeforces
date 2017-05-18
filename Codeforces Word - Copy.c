#include <stdio.h>

    int main(){
    char a[1000],ch;
    int k, b,i, j, count1 = 0, count2 = 0;

    while(scanf("%s", a)!=EOF){
        j = strlen(a);
        for( i= 0; i<j; i++){
            if( a[i] >= 'A'&& a[i] <= 'Z')
                count1++;
            else if( a[i] >= 'a'&& a[i] <= 'z')
                count2++;
        }
        if( count1 > count2)
                for(i = 0; i<j;i++){
            if( a[i] >= 'a'&& a[i] <= 'z')
            a[i] = 'A' +(a[i] - 'a');
        }
        else if(count1<=count2)
        {
            for(i = 0; i<j;i++){
            if( a[i] >= 'A'&& a[i] <= 'Z')
                a[i] = 'a' +(a[i] -'A');
            }
        }
        printf("%s\n",a);
    }
    return 0;
}
