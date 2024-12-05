#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include<cassert>
using namespace std;


int main(){
int x[5][5];
int i,j,counti=0,countj=0,i1=0,j1=0;
for (i = 0;i < 5;i++){
    for (j = 0;j < 5;j++){
        cin >> x[i][j];
    }
}
    for (i = 0;i < 5;i++){
    for (j = 0;j < 5;j++){
         if (x[i][j]==1){
            counti =i;
            countj = j;
}
}
}
j1 = 2-countj;
i1 = 2-counti;
if (j1 < 0) j1 = -j1;
if (i1 < 0) i1 = -i1;
cout << j1+i1;

return 0;}
/*
                 if (i>2){ x[i-1][j] = x[i][j]; count++;}
            else if (i<2) {x[i+1][j] = x[i][j]; count++;}
            else if (j<2) {x[i][j+1] = x[i][j]; count++;}
            else if (j>2){ x[i][j-1] = x[i][j]; count++;}
*/

/*
for (int h = 0;h < 5;h++){}
*/