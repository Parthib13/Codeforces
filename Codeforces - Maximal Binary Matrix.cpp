#include <bits/stdc++.h>
using namespace std;
int a[200][200];
int n, k;
int main()
{
    #ifdef parthibpc
    freopen("input.txt", "r", stdin);
    #endif // parthibpc

    cin >> n >> k;
    if(n*n < k){
        cout << "-1\n";
        return 0;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(a[i][j] == 0){
                if(i == j && k > 0){
                    a[i][j] = 1;
                    k--;
                }
                else if(k >= 2){
                    a[i][j] = a[j][i] = 1;
                    k-=2;
                }
            }
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
