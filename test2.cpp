#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
void sol();
int main() {
IO
ll t;
/* for(cin>>t;t--;) */
sol();
return 0;}

////////////////////////////////////////
class clocktype {
private:
	int hr, min, sec;
public:
	void settime(int a, int b, int c);
	void gettime (int &a, int &b, int &c)const;
	void printtime()const;
	int incrementseconds();
	int incrementminutes();
	int incrementhours();
	bool equaltime(const clocktype &x)const;
	clocktype(int a) { cout << "a"; hr = 0; min = 0; sec = 0; }
	clocktype() { cout << "b"; hr = 0; min = 0; sec = 0; }
};

void sol(){

clocktype c;
clocktype d[5];
return;}
///////////////////////////////////////