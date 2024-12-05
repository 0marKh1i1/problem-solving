#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
void sol();
ll t;
int main() {
IO
                                        for(cin>>t;t--;)
{sol();
cout<<endL;}
return 0;}



////////////////////////////////////////
void sol(){

ll n,x,c=0;
cin>>n>>x;
vector<ll> a(n) ;
for (int i = 0; i < n; i++) cin>>a[i];

if(n > 1) {
     if(a[0]<x){
          if(a[0]>a[1]){
               a[0]+=a[1];
               c+=a[1];
               a[1]=0;

          }else{
               a[1]+=a[0];
               c+=a[0];
               a[0]=0;
          }
     }
     if(a[n-1]<x){
          if(a[n-2]>a[n-1]){
               a[n-2]+=a[n-1];
               c+=a[n-1];
               a[n-1]=0;

          }else{
          a[n-1]+=a[n-2];
               c+=a[n-2];
               a[n-2]=0;
          }
     }

     for (int i = 1; i < n-1; i++) {
          if(a[i] < x and a[i]>0){
          
               if(a[i]<=a[i-1] and a[i-1]>=a[i+1] and i>0){
                    a[i-1]+=a[i];
                    c+=a[i];
                    a[i]=0;
          
               }else if(a[i]<=a[i+1] and a[i+1]>=a[i-1] and i<n-1){
                    a[i+1]+=a[i];
                    c+=a[i];
                    a[i]=0;
               }
          
          }

     }
}

for (int i = 0; i < n; i++) {
     if(a[i]>0) c+=x;
     //cout<<a[i]<<" ";  

}
// cout<<"\n";
cout<<c;


return;}
///////////////////////////////////////
