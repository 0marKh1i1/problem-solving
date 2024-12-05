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

ll n,q;
cin>>n>>q;
string s,t;
cin>>s>>t;

for (ll i = 0; i < q; i++)
{
    ll l, r;
    cin >> l >> r;
    
    ll count = 0;
    map<char, ll> mp;
    map<char, ll> mp1;
    for (ll j = l-1; j < r; j++)
    {
        mp[s[j]]++;
        mp1[t[j]]++;
    }
    for (char j = 'a'; j <= 'z'; j++)
    {
        count+=abs(mp[j]-mp1[j]);
    }
    cout<<(count)/2<<endL;
}


return;}
///////////////////////////////////////