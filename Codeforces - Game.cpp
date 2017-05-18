#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, k1, k2;
    cin>>n1>>n2>>k1>>k2;
    while(1){
        n1-=1;
        n2-=1;
        if(n1 == 0){
            cout<<"Second\n";
            return 0;
        }
        else if(n2 == 0){
            cout<<"First\n";
            return 0;
        }
    }
}
