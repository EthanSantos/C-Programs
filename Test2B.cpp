#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

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

float calculate_tax(char status, float income){
    float tax_amount;
    if (status == 'S'){
        if (income > 0 && income <= 8000){
            tax_amount = income * 0.1;
        }
        else if (income > 8000 && income <= 32000){
            tax_amount = 800 + (income * 0.15);
        }
        else if (income > 32000){
            tax_amount = 4400 + (income * 0.25);
        }
    }
    else{
        if (income > 0 && income <= 16000){
            tax_amount = income * 0.1;
        }
        else if (income > 16000 && income <= 64000){
            tax_amount = 1600 + (income * 0.15);
        }
        else if (income > 64000){
            tax_amount = 8800 + (income * 0.25);
        }
    }
    return tax_amount;
}

int main(){
    char status;
    float income;
    bool running = true;
    while (running){
        status = check_marital_status();
        income = get_income();
        cout << "Your income before tax: $" << income << endl;
        cout << "Your income after tax: $" << income - calculate_tax(status, income) << endl;
        cout << "Tax deducted: $" << calculate_tax(status, income) << endl;
    }
    return 0;
}