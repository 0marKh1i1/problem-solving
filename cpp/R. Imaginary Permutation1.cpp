#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N], sz[N];

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> p(n), pos(n);
    map<int, vector<int>> mod_map;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        --p[i];
        pos[p[i]] = i;
        mod_map[p[i] % k].push_back(i);
    }

    for (int i = 0; i < n; i++)
        make_set(i);

    for (const auto &pair : mod_map)
        for (int i = 1; i < pair.second.size(); i++)
            union_sets(pair.second[i - 1], pair.second[i]);

    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++)
        a[find_set(i)].push_back(p[i]);

    for (int i = 0; i < n; i++)
        sort(a[i].begin(), a[i].end());

    for (int i = 0; i < n; i++)
        for (int j = 0; j < a[i].size(); j++)
            p[pos[a[i][j]]] = a[i][j];

    for (int i = 0; i < n; i++)
    cout<<p[i];
        /* if (p[i] != i) {
            cout << "NO\n";
            return 0;
        }

    cout << "YES\n"; */
    return 0;
}