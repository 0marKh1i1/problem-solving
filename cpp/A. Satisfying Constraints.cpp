#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
using namespace std;
/* ll case3(vector<ll> x,ll start,ll end){
    ll ans=0,flag=1;
    for(int i=start;i<=end;i++){
        flag=1;
       for(int k:x){
            if(i==k){
                flag=0;
            }
        }
        ans+=((flag)?1:0);
    }
    return ans;
} */
int main() {
cin.tie(0)->sync_with_stdio(0);
int t;
cin >> t;
while (t--) {
    int n;
    cin >> n;
    int start = 1, end = 1e9;
    vector<int> k;
    while (n--) {
        int a, x;
        cin >> a >> x;
        if (a == 1) {
            start = max(start, x);
        } else if (a == 2) {
            end = min(end, x);
        } else {
            k.push_back(x);
        }
    }
    if (start > end) {
        cout << 0 << "\n";
        continue;
    }
    int count = 0;
    for (int y : k) {
        if (y >= start && y <= end) {
            count++;
        }
    }
    cout << max((int)end - (int)start + 1 - count, 0) << "\n";
}
return 0;}
