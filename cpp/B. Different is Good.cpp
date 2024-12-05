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

ll n; cin>>n;
str s; cin>>s;
set<char> st;
for(auto i:s) st.insert(i);
if(n>26) cout<<-1;
else cout<<n-st.size();

return;}
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}