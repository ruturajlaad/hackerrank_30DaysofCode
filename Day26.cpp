#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1,m1,y1;
    cin>>d1>>m1>>y1;
    int d2,m2,y2;
    cin>>d2>>m2>>y2;
    
    if(y1<y2 || (y1==y2 && m1<m2) || (y1==y2 && m1==m2 && d1<=d2)){
        cout<<"0"<<endl;
    }
    else if((d1>d2) &&(y1==y2)&&(m1==m2) ){
        cout<<15*abs(d1-d2)<<endl;
    }
    else if((m1>m2)&& (y1==y2)){
        cout<<500*abs(m1-m2);
    }
    else if(y1>y2){
        cout<<"10000";
    }
    
    return 0;
}