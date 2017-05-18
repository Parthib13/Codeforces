#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    scanf("%s", a);
    int b = strlen(a), i;
    for(i = 0;i < b;++i){
        a[i] = a[i] - '0' + 0;
    }
    printf("%d", a + 1);
}
