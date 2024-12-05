#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
    long long t, n, k, u = 0;
    string s = "";
    cin >> t;
    long long t1 = t;
    const long long T = t;
    vector<vector<long long>> vec1;
    vec1.resize(T, vector<long long>(2, 0));

    while (t1--) {
        cin >> vec1[u][0] >> vec1[u][1];
        u++;
    }

    t1 = T;
    u = 0;
    while (t1--) {
        for (int i = 2; i <= vec1[u][1]; ++i) {
            long long num = vec1[u][0];
            s = "";
            while (num > 0) {
                s += to_string(num % i);
                num /= i;
            }
            
            for (int j = 0; j <= s.size() - 1; ++j) {
                cout << s[j] << " ";
            }
        }
        cout << endl;
        u++;
    }

return 0;}



/*while (t1--){
s += to_string(vec1[u][u] % u);
                vec1[u][u] /= u;

cout <<"1   ";

    u++;    
}
t1 =T;
u=0;
while (t1--){
     cout << s[u] << " ";
    u++;    
}*/


/*long long t;
string s="";
cin >> t;
const long long T=t;
vector<long long> vec1(T);
vector<long long> vec2(T);
for (int i=0;i<T;++i){
    cin >> vec1[i]>>vec2[i];
}
for (int i=2;i<=vec2[i];++i){
    long long num =vec1[i-1];
    s="";
    while (num>0){
    s += to_string(num % i);
    num /=i;
    cout <<s<<" ";}
}
*/