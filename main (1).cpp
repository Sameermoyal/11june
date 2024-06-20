//4.create a map of name and salary and take an input of salary and delete all the corresponding name,salary pair which matches the salary.



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
    double SalaryToDelete;
    cin>>SalaryToDelete;
    for(auto it = nameSalPair.begin();it!=nameSalPair.end();)
    {
        if(it->second==SalaryToDelete)
        {
            it= nameSalPair.erase(it);
        }
        else
        {
            it++;
        }
    }
    for(auto it:nameSalPair)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
   
    return 0;
}
