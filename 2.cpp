//2. create a map of name of person and gender and then split them into two vectors, first vector name and second vector as gender.
#include<bits/stdc++.h>
using namespace std;

int main(){
   
    map<string, char> combined = {{"sameer", 'm'}, {"kunika", 'g'}, {"kunal", 'm'}, {"rahul", 'm'}, {"sara", 'g'}};
  
   vector<string>names;
   vector<char>genders;
  
    for (const auto& entry : combined) {
        names.push_back(entry.first);
        genders.push_back(entry.second);
    }
    
     cout << "Names: ";
    for (const auto& name : names) {
        cout << name << " ";
    }
    cout << endl;

    cout << "Genders: ";
    for (const auto& gender : genders) {
        cout << gender << " ";
    }
    cout << endl;

}