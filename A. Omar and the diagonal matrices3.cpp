#include <bits/stdc++.h>
using namespace std; int main() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); long long n; cin >> n; long long m; cin >> m; vector<vector<long long>> a(n,vector<long long>(m)); long long f=1,c1=1,c2=1,c3=1,c4=1; for(long long i=0;i<n;++i){ for(long long j=0;j<m;++j){ cin>>a[i][j]; if((i!=j) and a[i][j] != 0) f=0; }} if(n==m){ if(f) cout<<"YES\n"; else cout<<"NO\n"; }else if(n==2*m){ for(long long i=0;i<n/2;++i){ for(long long j=0;j<m;++j){ if((i!=j) and a[i][j] != 0) c1=0; }} for(long long i=n/2;i<n;++i){ for(long long j=0;j<m;++j){ if((i!=j+n/2) and a[i][j] != 0) c2=0; }} if((c1) and (c2)) cout<<"YES\n"; else cout<<"NO\n"; }else if(2*n==m){ for(long long i=0;i<n;++i){ for (long long j=0;j<m/2;++j){ if((i!=j) and a[i][j] != 0) c3=0; }} for(long long i=0;i<n;++i){ for(long long j=m/2;j<m;++j){ if((i+m/2!=j) and a[i][j] != 0) c4=0; }} if((c3) and (c4)) cout<<"YES\n"; else cout<<"NO\n"; }else cout<<"NO\n"; return 0; }