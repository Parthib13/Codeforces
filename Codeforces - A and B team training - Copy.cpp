#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, team = 0;
    cin>>a>>b;
    while(a != 0 && b != 0 && max(a,b) > 1){

        if(a >= b){
            a-=2;
            b-=1;
            team++;
        }
        else if(b > a){
            b-=2;
            a-=1;
            team++;
        }
    }
    cout<<team<<endl;
}
