#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    int sum = a;
    while(a >= b)
    {
        c = (a/b);
        sum = sum + c;
        d = (a%b);
        a= (c+d);
    }
    printf("%d\n", sum);
}

