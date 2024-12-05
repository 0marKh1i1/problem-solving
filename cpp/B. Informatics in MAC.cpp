#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define llj(i,x) long long i=0;i<x;++i
#define lli(x) long long i=0;i<x;++i
#define lln(x) long long x; cin>>x;
#define all(x) x.begin(), x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ld long double
#define pf push_front
#define ll long long
#define pb push_back
#define str string
#define ss second
#define ff first
#define endL "\n"
ll l=0;
void sol();
int main() {
IO
ll t;
for(cin>>t;t--;)
sol();
return 0;}
///////////////////////////////////////
void sol() {

lln(n)
vector<ll> v(n);
for(lli(n)) cin>>v[i];

return;}
///////////////////////////////////////
/*

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 1e5 + 10;
int n;
int a[maxn];
int l[maxn], r[maxn];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        l[i] = r[i] = 0;
    }
    set<int> s;
    for (int i = 1, cur = 0; i <= n; i++) {
        s.insert(a[i]);
        while (s.count(cur)) cur++;
        l[i] = cur;
    }
    s.clear();
    for (int i = n, cur = 0; i >= 1; i--) {
        s.insert(a[i]);
        while (s.count(cur)) cur++;
        r[i] = cur;
    }
    for (int i = 1; i < n; i++) {
        if (l[i] == r[i + 1]) {
            cout << "2\n";
            cout << 1 << ' ' << i << '\n';
            cout << i + 1 << ' ' << n << '\n';
            return;
        }
    }
    cout << "-1\n";
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;

    while (test--) {
        solve();
    }


}
*/
/*
#include <bits/stdc++.h>
using namespace std;
void chad()
{
    int n;
    cin >> n;
    vector<int> a(n), f(n), mex(n), m(n);
    set<int> s;
    for (int i = 0; i < n;i++){
        s.insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.erase(a[i]);
        mex[i] = *(s.lower_bound(0));
    }
    for (int i = 0; i < n;i++){
        s.insert(i);
    }
    for (int i = n - 1; i >= 0;i--){
        s.erase(a[i]);
        m[i] = *(s.lower_bound(0));
    }
    for (int i = 0; i < n - 1;i++){
        if(mex[i]==m[i+1]){
            cout << "2\n";
            cout << "1 " << i + 1 << "\n";
            cout << i + +2 << " " << n << "\n";
            return;
        }
    }
    cout << "-1\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t=1;
    cin >> t;
    while (t--)
        chad();
    return 0;
}
*/