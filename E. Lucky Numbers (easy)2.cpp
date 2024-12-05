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
struct node{
    ll x,c4,c7;
};
///////////////////////////////////////
void sol(){
ll n,ans=LONG_LONG_MAX;
cin>>n;
queue<node> q;
q.push({0,0,0});
while (!q.empty()){
    node Node = q.front();
    q.pop();
    if(Node.x>=n&&Node.c4==Node.c7){
        ans=min(ans,Node.x);
    }
    if(Node.x>1e10){
        continue;
    }
    q.push({Node.x*10+4,Node.c4+1,Node.c7});
    q.push({Node.x*10+7,Node.c4,Node.c7+1});

}
cout<<ans;
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}