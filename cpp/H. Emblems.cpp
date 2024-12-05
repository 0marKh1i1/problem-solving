#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
void sol();
int main() {
IO
ll t;
                                        // for(cin>>t;t--;)
sol();
return 0;}


////////////////////////////////////////
struct point{ll x; string y;};
point fn(ll x){
         if(x<=1199){return {1,"newbie"};}
    else if(x<=1399){return {2,"pupil"};}
    else if(x<=1599){return {3,"specialist"};}
    else if(x<=1899){return {4,"expert"};}
    else if(x<=2099){return {5,"candidate master"};}
    else if(x<=2399){return {6,"master"};}
    else if(x>=2400){return {7,"grandmaster"};}
}
void sol(){

string s;
ll c,m,d;
cin>>s>>c>>m>>d;
point t=fn(m),u=fn(c+d);
cout<<(u.x>t.x?u.y:"Think about it, you can do it!")<<endl;

return;}
///////////////////////////////////////