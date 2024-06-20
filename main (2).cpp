//5. create a map of name and salary and find if the user input name is exist in map.

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
    string name;
    cin>>name;
    if(nameSalPair.find(name)!=nameSalPair.end())
    {
        cout<<name<<" exists in the map\n";
    }
    else
    {
        cout<<name<<" doesnot exist in the map\n";
    }
}

