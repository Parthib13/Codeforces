#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    scanf("%s", a);
    int n;
    scanf("%d", &n);
    for(int k = 0;k < n;k++){
        int cnt = 0;
        int l, r;
        scanf("%d%d", &l, &r);
        for(int i = l-1;i < r-1;i++){
            if(a[i] == a[i+1]){
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}
