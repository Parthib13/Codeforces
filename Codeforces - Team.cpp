#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,i,j, c, t, sum = 0, count = 0;

    scanf("%d", &t);
    for(i = 0;i < t; i ++)
    {
        for(j = 0; j < 3; j++) {
        scanf("%d", &a);
        sum += a;
        }
        if(sum >= 2)
            count += 1;
            sum = 0;
    }
    printf("%d\n", count);

}
