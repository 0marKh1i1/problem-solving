#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
IO
ll t;
cin>>t;
ll n=0;ll x;
for (ll i = 0; i <t; i++)
{   
    cin>>x;
    n=max(n,x);
}

cout<<n;



return 0;}
