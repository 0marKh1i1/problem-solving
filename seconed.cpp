#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
long long left(long long f,long long g){

}
int main(){
long long t,n,m,x1,x2,y1,y2,a,b,h,sum;
cin >> t;
while (t--){
    h=0;
    sum=0;
cin >> n>>a>>b;
//if ((a>n)||(b>n)||((a+2>n)||(b+1>n))||((b+2>n)||(a+1>n))){cout << "NO"; continue;}
if (a<n&&b<n&&a!=b) {while ((n>a&&n>b)){++h;
a += 2;++b;}
while ((n>a&&n>b)){++sum;
b += 2;++a;}}
else if (a==b&&b==n&&a==n){
    //cout<<"YES  0\n";
}
else{cout << "NO\n"; continue;}
if (h==0){cout <<"YES "<<sum<<endl;}
else if (sum==0){cout <<"YES "<<h<<endl;}
else {cout <<"YES "<<min(h,sum)<<endl;}






}
return 0;}

/*#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;
int main(){
long long t,n,m,x1,x2,y1,y2,a,b,h,sum;
cin >> t;
while (t--){
    h=0;
cin >>n>>a>>b;
if (a%2==n%2&&b%2!=n%2){
    while (a<n&&b<n){
        h++;
        a+=2;
        b++;
    }
}else if (b%2==n%2&&a%2!=n%2){
    while (a<n&&b<n){
        h++;
        b+=2;
        a++;
    }
}else if (b%2==n%2&&a%2==n%2){
   if (a<b){
       while (a<n&&b<n){
       h++;
        a+=2;
        b++;
   }}else {while (a<n&&b<n){h++;
        b+=2;
        a++;}}
}else if (a==b&&b==n&&a==n){
    //cout<<"YES  0\n";
}
else{cout << "NO\n"; continue;}
cout <<"YES "<<h<<endl;

if (h==0){cout <<"YES "<<sum<<endl;}
else if (sum==0){cout <<"YES "<<h<<endl;}
else {cout <<"YES "<<min(h,sum)<<endl;}






}
return 0;}
*/
/*(a<b)&&*/
/*else if ((b<a)&&a<n&&b<n)*/
/*if (a < b) {a += 2;++b;} 
else {b += 2;++a;}*/
/*if (a<b) {a += 2;++b;} 
else {b += 2;++a;}}*/
/*vector<vector<long long>> ar;
long long t,n,m,x1,x2,y1,y2,a=0,h,sum;
cin >> t;
while (t--){
    sum=0;
    cin >>n>>m>> x1>>x2>>y1>>y2>>h;
    a=0;
    ar.resize(n, vector<long long>(m, 0));
    for (int i=0;i<n;++i){
     for (int j=0;j<m;++j){
        a++;
        ar[i][j]=a;
    }   
    }
        //cin ;
     for (int i=x1-1;i<x2;++i){
     for (int j=y1-1;j<y2;++j){
        ar[i][j]-=h;
    }   
    }
    for (int i=0;i<n;++i){
     for (int j=0;j<m;++j){
        sum+=ar[i][j];
    }   
    }
    cout <<sum<<endl;

}*/
/*int main(){
long long t,n,m,x1,x2,y1,y2,a,h,sum,q,r;
   cin>>t;
   while(t--){
    sum=0;
    cin >>n>>m>> x1>>x2>>y1>>y2>>h;
    cout<<(((n*m)*((n*m)+1)/2)-((((x2-x1+1)*(y2-y1+1)))*h))<<endl;}
return 0;}*/
/*//a=n*m;
    //q=((x2-x1+1)*(y2-y1+1));
    //r=(((n*m)*((n*m)+1)/2)-((((x2-x1+1)*(y2-y1+1)))*h));*/
/*for (int i=0;i<n;++i){
     for (int j=0;j<m;++j){
        
        cout <<ar[i][j]<<" ";
    }   
    }*/
/*long long ist(long long a,long long b,long long c){
   // a = a * 3600;
   // b = b*60;
    if ()
}*/
/*long long t,h,m,s;
cin >>t;
while (t--)
{
   cin>>h>>m>>s;
   //if (h+m==s){s++;}
   while (!(h+m==s))
   {
    s++;
     if (s==60){s=0; m++;}
    //else if (m<60){s++;}
     if (m==60){m=0; h++;}
   // else if (h<24){h++;}
     if (h==24){h=0;}
   }
   cout << h<<" "<<m<<" "<<s<<endl;
}*/
/*if (h+m==s) {cout << h<<" "<<m<<" "<<s<<endl; break;}
    else if (h+m<s);*/
/*if (h+m==s) {cout << h<<" "<<m<<" "<<s<<endl; break;}
    if (s<60){s++;}
    if (s==60){s=0;m++;}
    if (h+m==s) {cout << h<<" "<<m<<" "<<s<<endl; break;}
    if (m<60){m++;}
    if (m==60){m=0;h++;}
    if (h+m==s) {cout << h<<" "<<m<<" "<<s<<endl; break;}
    if (h<24){m++;}
    if (h==24){h=0;}
    if (h+m==s) {cout << h<<" "<<m<<" "<<s<<endl; break;}*/
/*else if (m<60){m++; }
   else if (s<60){s++; }*/
/*long long t,n,a=0,b=0,c;
cin >>t;
while (t--)
{
    cin>>n;
    b=0;
    a=0;
    if (n<10){
        b =n;
    }
    while (n>=10){
        b=0;
        a++;
        while (n>0)
        {
            
            b+=n%10;
            n/=10;
            //c+=b;
        }
         n=b;
         //if (b>=10)
        
    }
    cout << b<<" "<<a<<endl;
}

*/

/*long long  n,t=0,i=0,a,b;
cin>>n;
while(n--){
    i=0;
    i+=t;
    cin >> t;
    i=t-i;
    cout <<i<<" ";
}
*/
/*long long n,i,t;
cin >>n;
while (n--){
     i=0;
    cin >>t;
    while (t%2==0||t%3==0){
        if (!(t%2)) t/=2;
        else t/=3;
        i++;
    }
    cout << (((i%2==0)?"Second\n":"First\n"));
}*/
/*
int x=4;
while (x++<=10){
    cout<< "* ";
    x=x+2;
}
cout <<x;
*/

/*int x=10,y=5;
switch (x+2==10)
{
case 10||12: y++;
case 0:y--;break;

}
cout <<y;
*/


/*int x=1;
if (x)
cout <<"1";
else;
(x>0)?cout <<"No":cout << "YES";
*/

/*int x=7;
switch (x)
{
case 5+2:
case 1:
cout << "hi"; 
cout <<"No";break;
case 7:
default:
    break;
}*/