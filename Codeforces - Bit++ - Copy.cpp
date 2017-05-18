#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    int i, j, cnt = 0;
    scanf("%d", &j);
    while(j--){
    scanf("%s", a);
    if(a[0] == '+' && a[1] == '+' && a[2] == 'X' || a[0] == 'X' && a[1] == '+' && a[2] == '+'){
        cnt += 1;
    }
    else
        cnt -= 1;
    }
    printf("%d\n", cnt);
}

