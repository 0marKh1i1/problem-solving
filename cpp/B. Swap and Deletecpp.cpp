#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
IO
ll t,ans=0;
cin >> t;
while (t--) {
     str s; cin>>s;
     str s1=s;
     ans=0;
     int c[]={0,0};
    for(int i=0;i<s.size();i++){
        c[s[i]-'0']++;
    }
    for(int i=0;i<s.size();i++){
        if(c[!(s[i]-'0')]>0){
            c[!(s[i]-'0')]--;} 
        else{
            ans=s.size()-i;
            break;}
    }

        cout<<ans<<"\n";
    }




return 0;}