#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N = 1000000;
const int MAX_X = 1000000;

struct Triplet {
    int a, b, c;
    int sum;
    int product_sum;
};

vector<Triplet> precompute() {
    vector<Triplet> triplets;
    
    for (int a = 1; a <= MAX_X; ++a) {
        for (int b = a; b <= MAX_X; ++b) {
            for (int c = b; c <= MAX_X; ++c) {
                int sum = a + b + c;
                int product_sum = a * b + a * c + b * c;
                if (sum <= MAX_X && product_sum <= MAX_N) {
                    triplets.push_back({a, b, c, sum, product_sum});
                }
            }
        }
    }
    
    sort(triplets.begin(), triplets.end(), [](const Triplet &t1, const Triplet &t2) {
        return t1.sum < t2.sum;
    });
    
    return triplets;
}

void sol(const vector<Triplet>& triplets) {
    int n, x;
    cin >> n >> x;
    
    auto it = upper_bound(triplets.begin(), triplets.end(), x, [](int value, const Triplet &t) {
        return value < t.sum;
    });
    
    long long count = 0;
    for (auto i = triplets.begin(); i != it; ++i) {
        if (i->product_sum <= n) {
            count++;
        }
    }
    
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<Triplet> triplets = precompute();
    
    int t;
    cin >> t;
    while (t--) {
        sol(triplets);
    }
    
    return 0;
}