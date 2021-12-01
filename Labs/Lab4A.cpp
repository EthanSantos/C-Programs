/*
Prolog
a.  Program Description: Program that takes a user's inputs for two arrays and checks if they are the same exact array or different.
b.  Author: Ethan Santos
c.  Date: November 23, 2021
d.  Input variables: "input" float variable that is stored into an array
e.  Process Flow: Program asks the user to input values for the first and second array with a max capacity of 20. The program then runs the equals() function
to determine if the sizes of the arrays are the same, and if they are it loops through the arrays and checks if the values are the same at the same index.
If not, the equal variable is changed to false. After the process is done, the functions returns the equal variable and the program displays if the arrays
are the same or not.
f.  Output variables: bool value (equal)
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

bool equals(float a[], int a_size, float b[], int b_size){
    bool equal = true;
    if (a_size == b_size){
        for(int i = 0; i < a_size; i++){
            if (!(a[i] == b[i])){
                equal = false;
            }
        }
    }
    else{
        equal = false;
    }
    return equal;
}

int main(){
    const int CAPACITY = 20;
    float input;
    int first_size = 0;
    int second_size = 0;
    float first_array[CAPACITY];
    float second_array[CAPACITY];
    cout << "Enter the values for the first array and press Q/q to stop: ";
    while (cin >> input){
        first_array[first_size] = input;
        first_size++;
    }
    cin.clear();
    cin.ignore();
    cout << "Enter the values for the second array and press Q/q to stop: ";
    while (cin >> input){
        second_array[second_size] = input;
        second_size++;
    }
    cout << "Size of Array A: " << first_size << endl;
    cout << "Size of Array B: " << second_size << endl;
    bool equal = equals(first_array, first_size, second_array, second_size);
    if (equal){
        cout << "Both arrays are the same" << endl;
    }
    else{
        cout << "Two arrays are different" << endl;
    }
    system("pause");
    return 0;
}