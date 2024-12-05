#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <numeric>
#include <set>
#include <vector>
#include <iterator>
#include <limits.h>//[INT_MAX],[INT_MIN],[ LLONG [MIN & MAX] ]
#include <stack>
#include <queue>
#include <deque>
#include<string>
#define endl '\n'
#define ll long long
#define ff first
#define ss second
#define FOR(i, n) for (ll i = 0; i < n; ++i)
#define FORE(x, a) for (auto& x : a)
#define test(i,v) FORE(i, v)cout << i << ' ';
#define str string
#define all(x) x.begin(), x.end()
#define pb push_back
#define vi(x) vector<int> x 

using namespace std;

void boost() {
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	srand((unsigned)time(NULL));
}


void solve() {
	
	ll n, k; cin >> n >> k;
	str s; cin >> s;
	for (int i = 0; i < k; i++)
	{
		bool ok = 0;
		str a; cin >> a; ll temp=-1;
		for (int j = 0; j < 3; j++)
		{
			temp = s.find(a[j], temp+1);
			if (temp == string::npos)
			{
				ok=1; break;
			}
		}
			if (ok)cout << "YES" << endl;
			else cout << "NO" << endl;
		
	}
}

int main() {
	boost();
	ll t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}