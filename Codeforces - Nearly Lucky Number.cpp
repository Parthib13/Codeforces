#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(){
    long long  a, r, n, k;
    int i, temp = 0, flag;
    scanf("%i", &a);
    while(a != 0){
        r = a%10;
        if(r != 4 || r != 7){
                break;
            printf("No\n");
        }
        else{
            printf("YES\n");
        }

        k++;
        a/=10;
    }
    /*if(temp <= k){
        printf("Yes\n");
    }
    else
        printf("No\n");
*/
}
