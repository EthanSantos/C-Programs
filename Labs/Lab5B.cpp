/*
Prolog
a.  Program Description: Program that takes a user's inputs for an array and prints their array with the elements in reversed order.
b.  Author: Ethan Santos
c.  Date: November 30, 2021
d.  Input variables: "input" float variable that is stored into an array
e.  Process Flow: Program asks the user to input values into an array. The program displays their array then uses the reverse() function to reverse the order of the
array and display that back to the user. The reverse function works by using pointers and looping the arrays elements backwards.
f.  Output variables: int variable (returns 0 in the main() function)
*/

#include <iostream>

using namespace std;
 
void reverse(double* a, int size){
    double* p = a;
    p += size-1; // set to last element of array
    for (int i = 0; i < size; i++){
        cout << *p << " ";;
        p--;
    }
}

int main(){
    const int CAPACITY = 20;
    double input;
    int size = 0;
    double array[CAPACITY];
    cout << "Enter the values for the array and press Q/q to stop: ";
    while (cin >> input){
        array[size] = input;
        size++;
    }
    cout << "Your array: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl << "Your array reversed: ";
    reverse(array, size);
    return 0;
}