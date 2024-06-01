#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(int n){


    if(n==1){return false;}
        
    if(n==2 || n==3){return true;}
        
    if(n%2==0 || n%3==0){return false;}
        
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){return false;}
    }
    return true; 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    int n;
    for(int i=0;i<T;i++){
        cin>>n;
        
        if(isprime(n)){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not prime"<<endl;
        }
    }
    

    return 0;
}

