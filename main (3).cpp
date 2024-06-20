//7.Create a map of names and salaries. Write a program to take an input percentage and increase all the salaries by that percentage. Display the updated map.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,double>nameSalPair={
        {"Jhon",50000},
        {"Kiran",60000},
        {"Tisha",80000},
        {"Neha",70000},
        {"Aman",60000}
    };
   double percentage;
   cin>>percentage;
   for(auto &it:nameSalPair)
   {
       it.second += it.second *(percentage/100.0);
       cout<<it.first<<" "<<it.second<<"\n";
   }

   
}
