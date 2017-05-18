#include <bits/stdc++.h>
using namespace std;
bool hole[1000001];

int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for(int i = 0;i < m;i++){
        int x;
        scanf("%d", &x);
        hole[x] = true;
    }
    if(hole[1] == true){
        int c, v;
        //for(int i = 0;i < k;i++) scanf("%d%d", &c, &v);
        printf("1\n");
        return 0;
    }
    int bone = 1, i;
    for(i = 0;i < k;i++){
        int s1, s2;
        scanf("%d%d", &s1, &s2);
        if(s1 == bone){
            if(hole[s2] == true){
                bone = s2;
                break;
            }
            bone = s2;
        }
        else if(bone == s2){
            if(hole[s1] == true){
                bone = s1;
                break;
            }
            bone = s1;
        }
    }
    for(i = i+1;i < k;i++){
        int p, o;
        scanf("%d%d", &p, &o);
    }
    cout<<bone<<endl;
    return 0;

}
