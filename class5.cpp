#include "iostream"
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
return 0;
}



////////////////////////////////////////

class ban {

private:
    string c, a;
    double b;
    static ll st;
public:
    static ll counter;
    ban(void) {
        counter++;
        setall("name", "123456", 0);
    }
    ban(string s, string n, double t) {
        counter++;
        setall(s, n, t);
    }
    ~ban() {
        cout << "Good Bye " << a <<" "<<counter--<< endL;
    }
    void setall(string e, string, double);
    void getall(string& e, string& ghjsdgfmsjdgh, double& ytu) const;
    void print() const;
    bool isf(const ban&);
    static ll getst(void);
    static void setst(ll x);

};
void ban::setall(string s, string n, double t) {
    c = s;
    a = n;
    b = t;
    cout << counter << endL;
}
void ban::getall(string& s, string& n, double& t) const {
    s = c;
    n = a;
    t = b;
}
void ban::print() const {
    cout << c << " " << a << " " << b << " "<<st<<" "<<counter << endL;
}
bool ban::isf(const ban& o) {
    return(o.a == a);
}
 

ll ban::getst(void) { return st; }
void ban::setst(ll f) { st = f; ban p; p.print(); }
 ll ban::st = 0;
 ll ban::counter = 0;
void sol() {
    //ban::st = 9;
    ban::setst(456);
    cout << ban::getst() << endL;
    ban o1, o2("Amr khaled", "963852", 999);


    o1.print();
    o1.setall("Amal Ahmed", "123456", 120);
    o1.setst(798);
    o2.print();

    cout << (o1.isf(o2) ? "Yes same" : "not same") << endL;

return;}
///////////////////////////////////////