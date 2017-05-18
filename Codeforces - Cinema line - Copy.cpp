#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define all(a) (a).begin(),(a).end()
#define INIT(a) memset((a),0,sizeof(a))
#define fs first
#define sc second
#define pb push_back
#define sz size()
using namespace std;
typedef long long ll;
typedef double D;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;

const static int INF = 1e8;
const static D EPS = 1e-8;

int main(){
  int n;
  cin >> n;
  vi money(3,0), a(n);
  rep(i,n)cin >> a[i];

  bool f = true;
  rep(i,n){
    if(a[i] == 25){
      money[0]++;
    }else if(a[i] == 50){
      if(money[0]){
	money[0]--;
	money[1]++;
      }else{
	f = false; break;
      }
    }else{
      if(money[1] && money[0]){
	money[1]--; money[0]--;
	money[2]++;
      }else if(money[0]>=3){
	money[0] -= 3;
	money[2]++;
      }else{
	f = false; break;
      }
    }
  }
  cout << (f?"YES":"NO") << endl;

}
