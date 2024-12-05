#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
void sol();
int main() {
IO
ll t;
                                       for(cin>>t;t--;)
sol();
return 0;}



////////////////////////////////////////
void sol(){

ll n,m,k;
string s;
cin>>n>>m>>k>>s;
vector<ll> dp(n+2,1e6);
dp[n+1]=0;
s.insert(s.begin(),'L');
for (ll i = n; i >= 0; i--)
{
    if(s[i]=='C'){dp[i]=1e6;}
    else if(s[i]=='W') dp[i]=dp[i+1]+1;
    else if(s[i]=='L') {
        ll min1 = 1e6;
        for (ll j = 1; j <= m; j++)
        {
            if(i+j <= n+1 and dp[i+j] != 1e6 and dp[i+j] < min1) min1=dp[i+j];
        }
        dp[i]=min1;
    }
}


if(dp[0]>k){cout<<"NO"<<endL;return;}
cout<<"YES"<<endL;

return;}
///////////////////////////////////////