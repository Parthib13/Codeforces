#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	freopen("input.txt", "r", stdin);
	string a;
	cin >> a;
	int beg = (a[0] - '0') + 1;

	int len = a.size()-1;
	//cout << "len = " << len << endl << "beg = " << beg << endl;
	
	
	long long l;
	stringstream stream1;
	stream1.clear();
    stream1.str(a);
    stream1 >> l;
    long long ans = ceil(pow(10, len)) * beg - l;
	cout << ans << endl;
	return 0;
}
