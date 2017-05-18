#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long price;
    int col1, col2;
    map <long long, pair<int, int> > mp;

    scanf("%d", &n);
    vector <int> prc, c1, c2;
    for(int i = 0;i < n;i++){
        long long temp;
        scanf("%lld", &temp);
        prc.push_back(temp);
    }
    for(int i = 0;i < n;i++){
        int temp;
        scanf("%d", &temp);
        c1.push_back(temp);
    }

    for(int i = 0;i < n;i++){
        int temp;
        scanf("%d", &temp);
        c2.push_back(temp);
    }
    for(int i = 0;i < n;i++){
        pair <int, int> p;
        p.first = c1[i];
        p.second = c2[i];
        mp[prc[i]] = p;
    }

    int m;
    scanf("%d", &m);
    while(m--){
        int c;
        scanf("%d", &c);
        bool ok = false;
        map<long long,pair <int, int > >::iterator it=mp.begin();
        for (; it!=mp.end(); ++it){
            long long pr = it->first;
            pair <int, int> v = it->second;
            if((v.first == c || v.second == c )){
                it = mp.erase(it);
                printf("%lld\n", pr);
                ok = true;
                break;
            }
        }
        if(!ok){
            printf("-1\n");
        }
    }

}
