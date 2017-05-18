#include <bits/stdc++.h>
using namespace std;
string a[1010];
int cx[] = {1, -1, 0, 0};
int cy[] = {0, 0, 1, -1};
int turns[1010][1011];
int n, m;

void DFS(int sX, int sY, int dir)
{

    for(int i = 0;i < 4;i++){
        if(i == dir){
            int childx = sX + cx[i];
            int childy = sY + cy[i];
            if(childx >= 0 && childx < n && childy >= 0 && childy < m && (turns[childx][childy] == -1 || turns[childx][childy] > turns[sX][sY]) && a[childx][childy] != '*'){
                turns[childx][childy] = turns[sX][sY];
                DFS(childx, childy, i);
            }
        }
        else{
            int childx = sX + cx[i];
            int childy = sY + cy[i];
            if(childx >= 0 && childx < m && childy >= 0 && childy < n && (turns[childx][childy] == -1 || turns[childx][childy] > turns[sX][sY]+1) && a[childx][childy] != '*'){
                turns[childx][childy] = turns[sX][sY]+1;
                DFS(childx, childy, i);
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    int sX = -1, sY = -1, eX = -1, eY = -1;
    for(int i = 0;i < n;i++)
        cin>>a[i];

    for(int i = 0;i < n;i++){
        for(int j = 0;j  < m;j++){
            if(a[i][j] == 'S'){
                sX = i;
                sY = j;
            }
            if(a[i][j] == 'T'){
                eX = i;
                eY = j;
            }
        }
        if(sX != -1 && eX != -1) break;
    }
//    if(sx != -1 && tx != -1) break;
    for(int i = 0;i < 4;i++){
        memset(turns, -1, sizeof turns);
        turns[sX][sY] = 0;
        DFS(sX, sY, i);
        if(turns[eX][eY] != -1 && turns[eX][eY] <= 2){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";


}
