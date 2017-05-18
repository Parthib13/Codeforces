#include <bits/stdc++.h>
using namespace std;

int main ()
{
   long long int row, col, x, y, m, n, a;
   cin>>m>>n>>a;

   row=m/a;
   col=n/a;
   if(m%a>0){
	   row++;
   }
   if(n%a>0){
	   col++;
   }

   cout<<row*col<<endl;

}
