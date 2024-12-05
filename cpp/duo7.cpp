#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   int a[t];
   for (int i = 0; i < t; i++) {
       cin>>a[i];
   }
   int c=0,mx=0;
   for (int i = 0; i < t-1; i++) {
       if(a[i+1]>=a[i]){c++;mx=max(c,mx);}
       else c=0;
   }
    cout<<mx+1;
   
     return 0;
}