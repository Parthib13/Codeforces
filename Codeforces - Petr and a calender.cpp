#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    if(n == 8){
        if((31- (8-k))% 7 == 0){
            cout<<5<<endl;
        }
        else
            cout<<6<<endl;
    }
    else if(n == 2&&k == 1){
        cout<<4<<endl;
        return 0;
    }

    else if(n % 2 == 0){
        if((30- (8-k))% 7 == 0){
            cout<<5<<endl;
        }
        else
            cout<<"Con 2 -----> 6"<<endl;
    }
    else if(n % 2 != 0){
        if((31- (8-k))% 7 == 0){
            cout<<5<<endl;
        }
        else
            cout<<"Con 82 -----> 6"<<endl;
    }

}
