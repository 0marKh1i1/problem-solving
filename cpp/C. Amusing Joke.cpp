#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
using namespace std;

void sol(){

str a,b,c;
cin>>a>>b>>c;
vector<ll> v(26,0);
for(auto i:a) v[i-'A']++;
for(auto i:b) v[i-'A']++;
for(auto i:c) v[i-'A']--;
for(auto i:v) if(i!=0) {cout<<"NO"; return;}
cout<<"YES";
return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}