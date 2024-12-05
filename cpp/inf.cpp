#include <iostream>
using namespace std;
int main() {

int x=1;
int sum=0;
for(int i=0; i<5; i/=2) {
sum=sum+x;
cout<<sum<<" "<<i <<endl;
}
return 0;}