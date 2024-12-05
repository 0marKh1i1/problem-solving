#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x;
#define all(x) x.begin(), x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ld long double
#define pf push_front
#define ll long long
#define pb push_back
#define str string
#define ss second
#define ff first
#define endL "\n"
#define isit 1
void sol();
int main() {
IO
ll t=1;
if(isit)
cin>>t;
while (t--)
sol();
return 0;}
vector<ll> r(m);
vector <char>t(m);
///////////////////////////////////////
ll po(ll n,ll m,ll x){
ll temp1=x,temp2=x;
for(lli(m)){
    cin>>r[i]>>t[i];
    if(t[i]=='0'){
        if(r[i]+temp1>n)    
        {temp1 = (r[i]+temp1)-n;}
        else{temp1+=r[i];}
    }else if(t[i]=='1'){
        if(temp2-r[i]<=0)
        {temp2=(temp2+n)-r[i];}
        else {temp2-=r[i];}
    }else{
        if(temp2-r[i]<=0)
        {temp2=(temp2+n)-r[i];}
        else {temp2-=r[i];}
        if(r[i]+temp1>n)    
        {temp1 = (r[i]+temp1)-n;}
        else{temp1+=r[i];}
        if(temp1==temp2){
            
        }

    }
    
}

}
void sol(){

lln(n)
lln(m)
lln(x)



return;}
///////////////////////////////////////