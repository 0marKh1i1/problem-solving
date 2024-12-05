#include<bits/stdc++.h>
using namespace std;

string solve() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n), pos(n+1), visited(n);
    for(int i = 0; i < n; ++i) {
        cin >> p[i];
        pos[p[i]] = i;
    }
    vector<vector<int>> g(n);
    for(int m = 2; m <= k; ++m) {
        for(int i = m; i <= n; i += m) {
            g[pos[i]].push_back(pos[i - m]);
            g[pos[i - m]].push_back(pos[i]);
        }
    }
    for(int i = 0; i < n; ++i) {
        if(visited[i])
            continue;
        vector<int> idx, vals;
        stack<int> s;
        s.push(i);
        while(!s.empty()) {
            int v = s.top();
            s.pop();
            if(visited[v])
                continue;
            visited[v] = 1;
            idx.push_back(v);
            vals.push_back(p[v]);
            for(int u : g[v]) {
                if(!visited[u])
                    s.push(u);
            }
        }
        sort(idx.begin(), idx.end());
        sort(vals.begin(), vals.end());
        for(int j = 0; j < idx.size(); ++j) {
            if(idx[j] != pos[vals[j]])
                return "NO";
        }
    }
    return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
        cout << solve() << "\n";
    
    return 0;
}