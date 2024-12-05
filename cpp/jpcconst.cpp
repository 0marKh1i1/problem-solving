#include <iostream>
#include <vector>
#define ll long long
#define str string
using namespace std;
ll fn(ll a){
    if (a <= 1) return false;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}

int main(){
  ll t; cin >>t;
  while (t--){
    ll n; cin >>n;
    vector<ll> v;
    v.resize(n);
    ll ik=0;
    for (ll i = n-1; i >= 2; i--)
    {
        if (fn(i)){
            v[ik++] = i;
            
        }
    }
    ll c=((n-v[0]>1)?n-v[0]:n-v[1]);
    ll d=((c>1)?1:0);
    if (c%2==0){
        d+=c/2;
        /* for (ll i = 0; i < c/2; i++){
            d++;

        } */}else {
            for (ll i = 0; i < v.size(); i++)
            {
                if(c%v[i]==0){
                    d+=(c/v[i]);
                    break;
                }
            }
            
        }


    cout <<d<<endl;

    //ll a=fn(n); 
     //if ((n-v[0]>1)&&((n-v[0])%2==0)){
        //c++;
        //cout << n-v[0];
   // }

  }
  
return 0;}
