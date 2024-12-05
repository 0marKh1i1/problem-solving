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

class student{
private:
    string name;
    int age;
    double gpa;
public:
    student(){
        setall("name",18,0);
    }
    student(string s,int a,double d){
        setall(s,a,d);
    }
    
    void setall(string,int,double);
    void getall(string &,int&,double&) const;
    void print() const;
    bool havesamegpa(const student&);
    ~student(){
        cout<<"good buy!\n"<<name<<" "<<age<<" "<<gpa<<endL;
    }


};

void student::setall(string s,int a,double d){
    name = s;
    age = a;
    gpa = d;
}
void student::getall(string& s,int& a,double& d) const{
    s=name;
    a=age;
    d=gpa;
}
void student::print() const{
    cout<<name<<" "<<age<<" "<<gpa<<endL;
}
bool student::havesamegpa(const student& other){
    return (other.gpa == gpa);
}















void sol(){

student std1,std2("omar",18,4.12);

std1.setall("Motaz",20,4.12);

std1.print();
std2.print();

cout<<((std1.havesamegpa(std2))?"smae GPA" :"not thesmae GPA")<<endL;


return;}
///////////////////////////////////////