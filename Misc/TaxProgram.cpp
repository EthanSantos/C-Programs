#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

const double RATE1 = 0.10;
const double RATE2 = 0.25;

char check_marital_status() {
    string status;
    cout << "Please enter your marital status (single/married): ";
    cin >> status;
    char letter = status.front();
    return toupper(letter);
}

float get_income() {
    float income;
    cout << "Please enter your income: $";
    cin >> income;
    return income;
}

float calculate_tax(char status, float income) {
    float tax_due;
    if (status == 'S') {
        if (income < 32000) {
            tax_due = income * RATE1;
        }
        else {
            tax_due = 3200 + ((income - 32000) * RATE2);
        }
    }
    else {
        if (income < 64000) {
            tax_due = income * RATE1;
        }
        else {
            tax_due = 6400 + ((income - 64000) * RATE2);
        }
    }
    return tax_due;
}

int main() {
    char status;
    string answer;
    float income;
    float tax_rate;
    bool running = true;
    while (running) {
        status = check_marital_status();
        income = get_income();
        switch (status) {
            case 'S': cout << "Tax due: $" << calculate_tax(status, income) << endl; break;
            case 'M': cout << "Tax due: $" << calculate_tax(status, income) << endl; break;
        }
        cout << "Do you want to continue (yes/no)?: ";
        cin >> answer;
        char letter = answer.front();
        if (letter != 'y'){
            running = false;
        }
    }
    return 0;;
}