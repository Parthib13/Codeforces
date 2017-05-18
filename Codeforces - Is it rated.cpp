#include <bits/stdc++.h>
using namespace std;
int n;
int a[100000];

int main()
{

    scanf("%d", &n);
    for(int i = 0;i < n;i++){
        int k, b;
        scanf("%d %d", &k, &b);
        if(k != b){
             int tt, t;
            for(int p = i;p < n-1;p++)
                scanf("%d %d", &tt, &t);

            printf("rated\n");

            return 0;
        }
        a[i] = b;
    }

    bool flag = false;

    for(int i = 1;i < n;i++){
        if(a[i] > a[i-1]){
            flag = true;
        }
    }
    if(flag){
        printf("unrated\n");
        return 0;
    }
    printf("maybe\n");
    return 0;
}
