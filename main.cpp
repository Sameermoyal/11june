
//3. I have a vector of n number group them into 3 parts number greater than 5, number greater than 9, number greater than 8.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>numberGroup={ 2,4,5,6,7,8,10,11,9,13,3,5,6,7};
    
    vector<int>gt5;
    vector<int>gt8;
    vector<int>gt9;
    
    
    for(auto it:numberGroup){
        if(it>9){
            gt9.push_back(it);
        }else if(it>8){
             gt8.push_back(it);
        }else if(it>5){
             gt5.push_back(it);
        }
    }
    
    for(auto ele:gt5){
        cout<<ele<<" ";
    }
    cout<<"\n";
    
    for(auto ele:gt8){
        cout<<ele<<" ";
    }
    cout<<"\n";
    
    for(auto ele:gt9){
        cout<<ele<<" ";
    }

    
}
