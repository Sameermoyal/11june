//1. create two vectors age and names and map them corresponding to name and age in sorted manner according to the age, the highest age should be at top.

#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout<<"first";
    
    vector<string>name={"sameer","abdul","kadir","aman","nepu"};
    
    vector<int>age={57,5,6,1,4};
    
    map<int,string,greater<int>>combined;
     
    
    for (int i = 0; i < age.size(); ++i) {
        
     combined[age[i]]=name[i];
      
    }
    
    for(auto it : combined){
       cout<< it.first<<" ";
        cout<<it.second<<"\n";
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

     
    
    
    
    
    
    
}