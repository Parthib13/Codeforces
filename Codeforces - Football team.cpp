#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    int i, j = 0, len, temp = 0;
    scanf("%s", len);
    for(i = 0;i < strlen(a);i++){
        if(a[i] == a[i+1]){
        j += 1;
        }
        else if(a[i] != a[i+1]){
            j = 0;
        }
        if(j >= 6){
            temp+=1;
        }
    }
    if(temp > 0 )
        printf("YES\n");
        else
        printf("NO\n");
}
