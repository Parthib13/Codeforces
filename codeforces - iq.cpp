#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, p, c = 1;
    scanf("%d %i", &p, &a);
    int n = p-1;
    int k = a % 2;
    while(n--){
        scanf("%d", &a);
        int s = a%2;
        if(k == s){
                 c++;
            continue;
        }
        else{
            c++;
            printf("%i\n", c);
            break;
        }

    }

}
