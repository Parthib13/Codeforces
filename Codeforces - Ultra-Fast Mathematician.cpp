#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    for(i = 0; i < strlen(a);i++){
        if(a[i] == b[i]){
            printf("0");
        }
        else
            printf("1");
    }
}
