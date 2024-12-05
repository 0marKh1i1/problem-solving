#include <iostream>
#include <vector>
#define ll long  long
using namespace std;

long long is(long long a,long long b,vector<vector<long long>> c){
    for (long long y=0;y<c.size();y++){
        for (long long u=0;u<1;u++){
            if ((a==c[y][u]&&a==c[y][u+1])||(a==c[y][u+1]&&a==c[y][u]))
                return 0;
            
        }
    }
    return 1;
}
int main()
{
ll n;
cin >>n;
vector<vector<long long>> vec ;
for (long long i =0;i<n;++i){
    for (long long j=0;j<n;++j){
        if (is (i,j,vec)){
            vec.resize(vec.size()+1,vector<long long>(2));
            vec[i][0]=i;
            vec[i][1]=j;
        }
    }
}
cout << vec.size();
    return 0;
}