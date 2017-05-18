#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    int x, i, j, k, n=0;
    scanf("%d %s",&x, a);
    //k = strlen(a);
    for(i = 0;i < x;i++){
            if(a[i] == a[i - 1])
                n += 1;
    }
    printf("%i", n);
}
