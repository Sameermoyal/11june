#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize the map of names and salaries
    map<string, double> nam = {
        {"Jhon", 100000},
        {"Kiran", 60000},
        {"Tisha", 60000},
        {"Neha", 70000},
        {"Aman", 90000}
    };

    // Create a multimap to store the salaries as keys and names as values
    multimap<double, string> salaryToName;

    // Insert all elements from the original map into the multimap
    for (const auto& p : nam) {
        salaryToName.insert({p.second, p.first});
    }

    // Display the sorted names and their salaries
    cout << "Names sorted by salaries in ascending order:" << endl;
    for (const auto& pair : salaryToName) {
        cout << "Name: " << pair.second << ", Salary: " << pair.first << endl;
    }

    return 0;
}
