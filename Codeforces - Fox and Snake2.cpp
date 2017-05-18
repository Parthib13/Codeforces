#include <stdio.h>
int main()
{
    int x,y,i,j,k,l;
    scanf("%d%d",&x,&y);
    int a[x],b[y];
    for (i=0;i<=x-1;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=y;j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else if(i%4==1)
        {
            for(k=1;k<=y-1;k++)
            {
                printf(".");
            }
            printf("#\n");
        }
        else
        {
            printf("#");
            for(l=1;l<=y-1;l++)
            {
                printf(".");
            }
            printf("\n");
        }
    }
    return 0;
}
