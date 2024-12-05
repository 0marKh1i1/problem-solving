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
string flip(string a){
    string b=a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='0' || a[i]=='1' || a[i]=='2' || a[i]=='5' || a[i]=='8' || a[i]=='x' )
           {b[i]=a[i]; b[a.size()-1-i]=flip((string q(1,a[i])));}
        else if(a[i]=='6')
            {b[i]='9'; b[a.size()-1-i]=flip((string w(1,'9')));}
        else if(a[i]=='9')
            {b[i]='6'; b[a.size()-1-i]=flip((string e(1,'6')));}
        else if(a[i]=='3')
            {b[i]='E'; b[a.size()-1-i]=flip((string r(1,'E')));}
        else if(a[i]=='E')
            {b[i]='3'; b[a.size()-1-i]=flip((string y(1,'3')));}
        else if(a[i]=='7' or a[i]=='4' or a[i]=='A' or a[i]=='b' or a[i]=='d' or a[i]=='C' or a[i]=='F')
            b[i]='x';
        
    }
    return b;
}
void sol(){

string s;
cin>>s;
ll c=0;
string t=flip(s);
string u=flip(t);
for(int i=0;i<s.size();i++){
    if(u[i]!=s[i]){
        c++;
    }
}
 cout<<t<<endL<<u<<endL;
cout<<c;
return;}
///////////////////////////////////////
//xxx5xx
//63181E9
