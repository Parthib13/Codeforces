#include <bits/stdc++.h>
using namespace std;
    int main()
    {
        int n,i,a;
        double s,b=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
        scanf("%d",&a);
        b=b+a;
        }
        s=b/n;
        printf("%lf",s);

    }
