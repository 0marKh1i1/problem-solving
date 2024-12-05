#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef double ld;
#define endL "\n"
void sol();
int main() {
    IO
        ll t;
    //                    for(cin>>t;t--;)
    sol();
    return 0;
}



////////////////////////////////////////
void sol() {

    ll c, n, x;
    ld m, r;
    cin >> c >> n >> x >> m >> r;
    ld melons = floor(c / m), num = 0;
    ld tot = 0;
    vector<ld> v(n), b(n);



    for (ll i = 0; i < n; i++) {
        ld temp;
        cin >> temp;
        temp = (temp > 50 ? temp : temp < 20 ? temp : 25);

        if (temp > 50) {
            v[i] = max(0.0, x - (r * (temp - 50)));
        }
        else if (temp > 20) {
            v[i] = x;
        }
        else {
            v[i] = max(0.0, x - ((20 - temp) * r));
        }
        b[i] = v[i];

    }
    

    ll l = 0, r1 = n - 1;
    while (melons > 0 and r1 > l) {
        if (v[l] <= v[r1]) {
            if (melons >= v[l]) {
                melons -= v[l];
                v[l] = 0;
                l++;
            }
            else {
                v[l] -= melons;
                melons = 0;
            }
        }
        else {
            if (melons >= v[r1]) {
                melons -= v[r1];
                v[r1] = 0;
                r1--;
            }
            else {
                v[r1] -= melons;
                melons = 0;
            }
        }
    }

    
    for (ll i = 0; i < n; i++) {
        num += v[i];
    }
    


    for (ll i = 0; i < n; i++) {

        if (v[i] > 0 and b[i] > 0) {
            tot += v[i] / b[i];
        }

    }

    
    ld f = n - tot;
    f /= n;

    cout << fixed << setprecision(4) << (100 * f) << " " << num * m;

    return;
}
/////////////////////////////////////// 
/*
 10 10 7 0.5 0.5
 4 6 10 15 18 18 20 44 55 70


 20 7 8 1 0.6
 6 7 8 51 52 20 37

 100 5 5 101 1
 100 13 20 3 5

 7 9 7 0.25 0.5
 4 6 10 15 18 20 44 55 70

 */
