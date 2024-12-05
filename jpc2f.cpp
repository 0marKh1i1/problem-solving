#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <numeric>
#include <algorithm>
#include <cassert>
#include <climits>
#include <numeric>
#include <cctype>
#define ll long long
#define str string
using namespace std;
int main(){
  long long n;
  cin >> n;

  long long a[n][n], b = 0;

  for (long long i = 0; i < n; ++i)
    {
      for (long long j = 0; j < n; ++j)
	{
	  cin >> a[i][j];
	}
    }

  for (long long i = 0; i < n; ++i)
    {
      if (i != n - i - 1)
	{
	  b += a[i][i] * a[i][n - i - 1];
	}
    }

  cout << b << endl;
return 0;}
/*if (N<=2){f=0;}
           else  f=1;
        if (f){--N;}
        else ++N;
        cout <<N<<endl;
        //N=((N>2)?--N:f=1);
        b+=a[i][j]*a[i][j+N];*/


        /* long long n; cin >> n;
ll a[n][n],b=0,N=n,f=1;
for (ll i = 0; i < n; ++i) {
    for (ll j = 0; j < n; ++j) {cin >> a[i][j];}
}
for (ll i = 0; i < n; ++i) {
    for (ll j = i; j < i+1; ++j) {
       //if (i+1==n){j=i+1;}
        b+= a[i][j]*a[i][n-i-1];
        cout <<n-i-1<<" ";
        }
}
   //cout <<b;
*/