//9.Create a map of names and salaries. Write a program to count and display the frequency of each salary in the map.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize the map of names and salaries
    map<string, double> nam = {
        {"Jhon", 50000},
        {"Kiran", 60000},
        {"Tisha", 60000},
        {"Neha", 70000},
        {"Aman", 90000}
    };

    // Map to store the frequency of each salary
    map<double, int> salaryFrequency;

    // Iterate over each name-salary pair and count the frequencies
    for (const auto& p : nam) {
        double salary = p.second;
        if (salaryFrequency.find(salary) != salaryFrequency.end()) {
            salaryFrequency[salary]++;  // Increment the count if salary is found
        } else {
            salaryFrequency[salary] = 1;  // Initialize to 1 if salary is not found
        }
    }

    // Display the salary frequencies
    cout << "Salary Frequencies:" << endl;
    for (const auto& pair : salaryFrequency) {
        cout << "Salary: " << pair.first << " - Frequency: " << pair.second << endl;
    }

    return 0;
}
