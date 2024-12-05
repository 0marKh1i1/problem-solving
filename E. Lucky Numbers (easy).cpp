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
///////////////////////////////////////
void sol(){

    str l;
    cin>>l;
    str s=l;
    ll c7=0,c4=0;
    for(ll i=0;i<l.size();++i){
        if(l[i]=='4'){
             c4++;
             s[i]=l[i];
             }
        else if(l[i]=='7'){
             c7++;
             s[i]=l[i];
             }
        else if(l[i]>='5'&&l[i]<='6'){
            
                s[i]='7';
                c7++;
            }
        else if(l[i]>='0'&&l[i]<='3') {

                if(c4<=c7){
                    s[i]='4';
                    c4++;
                }else{
                    s[i]='7';
                    c7++;
                }
            }    
        
    }
if(c4>c7){
s+='7';
c7++;
}else if(c4<c7){
s+='4';
c4++;
}
cout<<s;
return;}
///////////////////////////////////////
int main() {
IO
/* ll t=1;
cin>>t;
while (t--) */
sol();
return 0;}