//8.Create two maps of names and salaries. Write a program to swap the salaries of corresponding names in the two maps. If a name is not present in both maps, ignore it for the swap.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,double>nameSalPair1={
        {"Jhon",50000},
        {"Kiran",60000},
        {"Tisha",80000},
        {"Neha",70000},
        {"Aman",60000}
    };
    map<string,double>nameSalPair2={
        {"Jhon",40000},
        {"Iron",60000},
        {"Visha",50000},
        {"Neha",80000},
        {"Chaman",30000}
    };
    for(auto &it:nameSalPair1)
    {
        if(nameSalPair2.find(it.first)!=nameSalPair2.end())
        {
            swap(it.second,nameSalPair2[it.first]);
        }
    }
    cout<<"\n";
    for(auto it:nameSalPair1)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
   
     for(auto it:nameSalPair2)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
   
}