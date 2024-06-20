
//6.create a map of name and salary and take an input of salary and print all the corresponding name,salary pair which matches the salary.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,double>nameSalPair={
        {"Jhon",50000},
        {"Kiran",60000},
        {"Tisha",89798},
        {"Neha",79794},
        {"Aman",68498}
    };
    int sal;
    cin>>sal;
    for(auto it=nameSalPair.begin();it !=nameSalPair.end();){
       if(it->second==sal){
        cout<<it->first<<"  "<<it->second<<" exists in the map\n";
        
    }
    it++;
   
    }
    
}

