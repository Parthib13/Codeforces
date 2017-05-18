#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    //int n;
    //int n;
    long long int a[20];

    size_t n = std::count(s.begin(), s.end(), 'B');
    a[0] = n;
    n = std::count(s.begin(), s.end(), 'u');
    a[1] = n/2;
    n = std::count(s.begin(), s.end(), 'l');
    a[2] = n;
    n = std::count(s.begin(), s.end(), 'b');
    a[3] = n;
    n = std::count(s.begin(), s.end(), 'a');
    a[4] = n/2;
    n = std::count(s.begin(), s.end(), 's');
    a[5] = n;
    n = std::count(s.begin(), s.end(), 'r');
    a[6] = n;

    sort(a, a+7);
    cout<<a[0]<<endl;

}
