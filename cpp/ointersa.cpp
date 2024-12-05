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
void sol(){
ll a=0,b=1,c=2,d=3;
ll* vp[]={&a,&b,&c,&d};
for(lli(sizeof vp/sizeof vp[0] )){
    cout<<vp[i]<<endL;
}
ll** p;
p= new ll* [4];
p[0]=&a;
p[1]=&b;
p[2]=&c;
p[3]=&d;
for(lli(4)){
    cout<<p[i]<<endL;
}
return;}
///////////////////////////////////////
/* cout<<"size:";
lln(x)
ll a[]={1,2,3,4,5};
ll** p;
p=new ll* [x];
for(lli(5)){
    p[i]=&a[i];
}
cout<<"a= ";
for(lli(5)) cout<<a[i]<<" ";
cout<<endl;
cout<<"&a= ";
for(lli(5)) cout<<&a[i]<<" ";
cout<<endl;

cout<<"p= ";
for(lli(x)) cout<<p[i]<<" ";
cout<<endl; */
/* auto it=v.begin();
cout<<*it; */
/* cout<<&v[7]<<endl<<&v[8]<<endl<<&v[9]<<endl<<&v[10]<<endl; */
/* str n="45164545dsadas34rsdffsd";
auto *p=&n;
*p="hello";
cout<<&n<<endl<<n<<endl<<*p<<endl<<p<<endl<<&p<<endl;
str a="1234";
p=&a;
cout<<*p<<endl<<p<<endl;
auto *q=&p;
a="hu";
str e="dgf";
p=&e;
cout<<*q<<endl<<q<<endl<<p<<endl; */
/* str a="hello world";
auto *p=&a;
a="hi";
str b="1234";
auto *q=p;
auto *k=&q;
auto *h=&p;
cout<<"\nbefor\n"
<<"\n a= "<<a<<"\n &a= "<<&a
<<"\n b= "<<b<<"\n &b= "<<&b
<<"\n p= "<<p<<"\n *p= "<<*p<<"\n &p= "<<&p
<<"\n h= "<<h<<"\n *h= "<<*h<<"\n &h= "<<&h
<<"\n q= "<<q<<"\n *q= "<<*q<<"\n &q= "<<&q
<<"\n k= "<<k<<"\n *k= "<<*k<<"\n &k= "<<&k
;
p=&b;
cout<<"\nafter\n"
<<"\n a= "<<a<<"\n &a= "<<&a
<<"\n b= "<<b<<"\n &b= "<<&b
<<"\n p= "<<p<<"\n *p= "<<*p<<"\n &p= "<<&p
<<"\n h= "<<h<<"\n *h= "<<*h<<"\n &h= "<<&h
<<"\n q= "<<q<<"\n *q= "<<*q<<"\n &q= "<<&q
<<"\n k= "<<k<<"\n *k= "<<*k<<"\n &k= "<<&k
; */
/*ll arr[]={1,2,3};
vector<ll> v={1,2,3,4,5,6,7,8,9};
auto *p=&v[0];
for(auto i = p;i!=&v[9];++i){
    cout<<*i<<" ";
}*/
/* 
cout<<"size: "<<endl;
lln(n)
ll* p= new ll [n];
for(lli(n)){
    p[i]=i;
}       
cout<<"p= "<<endl;
for(lli(n)){
    cout<<p[i]<<" ";
}
cout<<endl;
ll* s= new ll [n];
for(lli(n)){
    s[i]=p[i];
}
cout<<"s= "<<endl;
for(lli(n)){
    cout<<s[i]<<" ";
}
cout<<endl;
delete []s;
cout<<"p= "<<endl;
for(lli(n)){
    cout<<p[i]<<" ";
}
cout<<endl;
cout<<"s= "<<endl;
for(lli(n)){
    cout<<s[i]<<" ";
}
cout<<endl; */