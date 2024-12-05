#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <numeric>
#include <algorithm>
#include <cassert>
#include <climits>
#include <numeric>
#include <cctype>
#define ll long long
#define str string
using namespace std;


int main(){
    ll n,q,num,l,r,x,y,sum,i1,k; cin>>n>>q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++){cin>>a[i];}
    while (q--){
        cin>>num;
        switch(num){
            case 1: cin>>l>>r; sum =accumulate(a.begin(),a.end(),0)-accumulate(a.begin()+l-1,a.begin()+r,0) ;
            cout<<sum<<endl; break;
            case 2:  cin>>l>>r>>x>>y; reverse(a.begin()+l-1,a.begin()+r); sum =accumulate(a.begin()+x-1,a.begin()+y,0) ; 
            cout<<sum<<endl; break;
            case 3: cin>>l>>r>>x>>y; reverse(a.begin()+l-1,a.begin()+r); sum =accumulate(a.begin(),a.end(),0)-accumulate(a.begin()+x-1,a.begin()+y,0) ;
            cout<<sum<<endl; break;
            case 4: cin>>i1>>k>>l>>r; a[i1-1]=k; sum =accumulate(a.begin()+l-1,a.begin()+r,0) ;
            cout<<sum<<endl; reverse(a.begin()+l-1,a.begin()+r); break;
            case 5: cin>>l>>r; sum =accumulate(a.begin()+l-1,a.begin()+r,0) ;
            cout<<sum<<endl; break;
        }
    }
    
    


return 0;}
