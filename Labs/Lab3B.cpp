/*
Prolog
a.  Program Description: Program that uses a function to create prompts for getting a salary and percentage raise input.
b.  Author: Ethan Santos
c.  Date: November 2, 2021
d.  Input variables: salary and percentage raise (double)
e.  Process Flow: A functio nis created to create prompts and return values. A salary prompt and percentage raise prompt is created to get the input values and loops until
the user breaks the loop. The old salary, percentage raise, and new salary is displayed if the salary and percentage raise are valid inputs.
f.  Output variables: value (double)
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

double read_double(string prompt){
    double value;
    cout << prompt;
    cin >> value;
    return value;
}

int main(){
    double salary;
    double perc_raise;
    char answer;
    bool flag = true;

    while (flag){
        salary = read_double("Please enter your salary: ");
        if (salary < 0){
            cout << "Error, invalid salary." << endl;
        }
        else{
            perc_raise = read_double("What percentage raise would you like? ");
            if (perc_raise < 0){
                cout << "Error, invalid percentage raise." << endl;
            }
        }
        
        if ((salary >= 0) && (perc_raise >= 0)){
            cout << "Old Salary: $" << salary << endl;
            cout << "Percentage raise: " << perc_raise * 100 << "%" << endl;
            cout << "New Salary: $" << salary + (salary * perc_raise) << endl;
        }
        cout <<"Do you want to continue (y/n)? ";
        cin >> answer;
        if (answer != 'y'){
            cout << "Exit!" << endl;
            flag = false;
        }
    }

}