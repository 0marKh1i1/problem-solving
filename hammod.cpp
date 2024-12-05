#include <iostream>
using namespace std;
int main() {

int year;

cin>>year;
cout<<"Enter a year: "<<year<<endl;
if(year%4==0 && year%100!=0){
    cout<<"The year is leap\n";
}else if(year%400==0){
    cout<<"The year is leap\n";
}else{
    cout<<"Not a leap year\n";
}

return 0;}