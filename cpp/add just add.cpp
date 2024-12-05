#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n,a,b;
    cin>>n>>a>>b;
    while(a<n||b<n){
        if(a>b){
            b+=2;
            a++;
        }else {
            b++;
            a+=2;
        }
    }
    if(a==b){
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}