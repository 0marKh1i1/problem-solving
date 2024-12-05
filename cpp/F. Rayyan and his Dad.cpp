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
/* void sol(){

string s;
cin>>s;
int a[5]={0};
for(int i=0;i<7;++i){
    a[s[i]-'A']++;
}
for(int i=0;i<5;++i){
    cout<<a[i]<<endl;
}
bool f[5];
if(a[0]>=1) {
    f[0]++;
    a[0]--;    
}
if(f[0] and a[0]>=2){
    f[1]++;
    a[0]-=2;
} 
if(!(f[1]) and a[1]>=1){
    f[1]++;
    a[1]--;
}
if(f[1] and a[2]>=1)



return;} */
///////////////////////////////////////
void sol() {
    string s;
    cin >> s;
    int a[5] = {0};
    for(int i = 0; i < 7; ++i) {
        a[s[i]-'A']++;
    }
    bool f[5] = {false};
    if(a[0]>=1) {
        f[0]= true;
        a[0]--;    
    }
    if(f[0] and a[1]>=1){
        f[1]= true;
        a[1]--;
    }
    if(!f[1] and a[0]>=2){
        f[1]= true;
        a[0]-=2;
    } 
    if(f[1] && a[2] >= 1) {
        f[2] = true;
        a[2]--;
    }
    if(!f[2] && a[1] >= 1 and a[0]>=1) {
        f[2] = true;
        a[1]--;
        a[0]--;
    }
    if(!f[2] && a[0] >= 3) {
        f[2] = true;
        a[0]-=3;
    }
    if(f[2] and a[3]>=1){
        f[3]= true;
        a[3]--;
    }
    if(!f[3] and a[1]>=2){
        f[3]= true;
        a[1]-=2;
    }
    if(!f[3] and a[2]>=1 and a[0]>=1){
        f[3]= true;
        a[2]--;
        a[0]--;
    }
    if(!f[3] and a[0]>=4){
        f[3]= true;
        a[0]-=4;
    }
    if(f[3] and a[4]>=1){
        f[4]= true;
        a[4]--;
    }
    if(!f[4] and a[3]>=1 and a[0]>=1){
        f[4]= true;
        a[3]--;
        a[0]--;
    }
    if(!f[4] and a[2]>=1 and a[1]>=1){
        f[4]= true;
        a[2]--;
        a[1]--;
    }
    if(!f[4] and a[2]>=1 and a[0]>=2){
        f[4]= true;
        a[2]--;
        a[0]-=2;
    }
    if(!f[4] and a[1]>=2 and a[0]>=1){
        f[4]= true;
        a[1]-=2;
        a[0]--;
    }
    if(!f[4] and  a[0]>=5){
        f[4]= true;
        a[0]-=5;
    }

    if(f[0] && f[1] && f[2] && f[3] && f[4]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}