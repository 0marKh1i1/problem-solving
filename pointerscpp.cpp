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
#define isit 0
void sol();
int main() {
IO
ll t=1;
if(isit)
cin>>t;
while (t--)
sol();
return 0;}
///////////////////////////////////////
void sol() {

ll a[]={0,1,2,3,4,5,6,7,8,9};
ll n = sizeof a/sizeof a[0];
cout<<" a= "<<a<<" a+5= "<<a+5<<" n= "<<n<<" ll= "<<sizeof(ll)
<<endl<<((a+5)==(a+9-4))<<endl
;
return;}
/* char *p=0;
cout
<<" int: "<<sizeof(int)<<endl
<<" long: "<<sizeof(long)<<endl
<<" ll: "<<sizeof(ll)<<endl
<<" str: "<<sizeof(str)<<endl
<<" char: "<<sizeof(char)<<endl
<<" float: "<<sizeof(float)<<endl
<<" double: "<<sizeof(double)<<endl
<<" ld: "<<sizeof(ld)<<endl
<<" pointer: "<<sizeof(p)<<endl
<<" short: "<<sizeof(short)<<endl
<<" short 5.5: "<<short(5.5)<<endl
; */
/*ll a[]={0,1,2,3,4,5,6,7,8,9};
cout<<static_cast<void*>(a)<<" "<<static_cast<void*>(&a[0])<<" "<<static_cast<void*>(&a)<<endl;
if(static_cast<void*>(a)==static_cast<void*>(&a)&&(a)==(&a[0])) yes
else no*/