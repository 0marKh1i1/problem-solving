#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define endL "\n"
void sol();
int main() {
IO
ll t;
               //       for(cin>>t;t--;)
sol();
return 0;}



////////////////////////////////////////

class ban{

private:
    string c,a;
    double b;
public:
    ban(): c("name"),a("123456"),b(0) {} // setall("name","123456",0);
    ban(string s,string n,double t): c(s),a(n),b(t) {} // setall(s,n,t);
    void setall(string e,string ,double);
    void getall(string& e ,string& ,double & ytu) const;
    void print() const;
    bool isf(const ban&);
    ~ban(){
        cout<<"Good Bye "<<a<<endL;
    }


};
void ban::setall(string s,string n ,double t){
    c=s;
    a=n;
    b=t;
}
void ban::getall(string& s ,string& n ,double& t) const{
    s=c;
    n=a;
    t=b;
}
void ban::print() const{
    cout<<c<<" "<<a<<" "<<b<<endL;
}
bool ban::isf(const ban& o){
    return(o.a==a);
}


void sol(){

ban o1,o2("Amr khaled","1234567",1000);

o1.setall("Amal Ahmed","1234567",120);

o1.print();
o2.print();

cout<<(o1.isf(o2)?"Yes same":"not same")<<endL;

return;}
///////////////////////////////////////