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

ll n,m;
pair<ll,ll> mx={1e8,1e8},mn={-1e8,-1e8};
cin>>n>>m;
vector<vector<char>> v(n,vector<char>(m));
for(ll i=0;i<n;i++)
for(ll j=0;j<m;j++)
cin>>v[i][j];

for(ll i=0;i<n;i++)
for(ll j=0;j<m;j++){
    if(v[i][j] == '#'){
        mx = min(mx, {i, j});
        mn = max(mn, {i, j});
	}
}

cout<<(mx.first + mn.first) / 2 + 1<<" "<<(mx.second + mn.second) / 2 + 1<<endL;


return;}
///////////////////////////////////////