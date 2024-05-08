#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    std::cin>>n;
      
    std::map<std::string,int> mp;
    for(int i=0;i<n;i++){
        int mno;
        std::string name;
        
        std::cin>>name>>mno;
        mp[name]=mno;
    }
    
    std::string q;
    while(std::cin>>q){
        if(mp.find(q)!=mp.end()){
            std::cout<<q<<"="<<mp[q]<<endl;
        }else{
            std::cout<<"Not found"<<endl;
        }
    }
    return 0;
}
