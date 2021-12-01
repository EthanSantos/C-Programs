/*
Prolog
a.  Program Description: Program that displays the numeric version of the given letter input grade.
b.  Author: Ethan Santos
c.  Date: October 19, 2021
d.  Input variables: strings (grade)
e.  Process Flow: Command line calculates the numeric grade by adding a 0.3 for grades with a '+' and -0.3 for grades with a '-'.
If the grade is a F, your numeric grade is 0.
f.  Output variables: the numeric_grade variable 
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string get_letter_grade(){
    string grade;
    cout << "What is your letter grade?: ";
    cin >> grade;
    return grade;
}

int main() {
    while (true){
        string letter_grade = get_letter_grade();
        char letter = toupper(letter_grade.front());
        float grade_increase = 0.0;
        float numeric_grade;
        if (letter_grade.find("+") != string::npos) {
            if (letter_grade.find("A") != string::npos) {
                grade_increase = 0.0;
            }
            else{
                grade_increase = 0.3;
            }
        }
        else if (letter_grade.find("-") != string::npos) {
            grade_increase = -0.3;
        }
        switch (letter){
            case 'A': numeric_grade = grade_increase + 4.00; break;
            case 'B': numeric_grade = grade_increase + 3.00; break;
            case 'C': numeric_grade = grade_increase + 2.00; break;
            case 'D': numeric_grade = grade_increase + 1.00; break;
            case 'F': numeric_grade = 0; break;
        }
        cout << "The numeric value is " << numeric_grade << endl;
    }
    return 0;
}