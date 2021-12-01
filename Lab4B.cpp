/*
Prolog
a.  Program Description: Program that uses a function to remove duplicates of a user inputted array.
b.  Author: Ethan Santos
c.  Date: November 23, 2021
d.  Input variables: "input" float variable that is stored into an array
e.  Process Flow: The program asks the user to input values for an array and displays that array. After, the remove_duplicates function is ran which returns the size
of the array with duplicates removed. The duplicates are removed by looping through the array and running another loop inside that loop to
check previous values up to the current index, and if the previous and current number are the same the number is removed because it is a duplicate
and the size of the array is decreased. The values are all shifted one index less (to the left basically). After all duplicates are removed, the new array
is displayed with the size of the new array as well.
f.  Output variables: size (integer variable)
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int remove_duplicates(float array[], int size){
    for (int i=0; i < size; i++){ // loop through every number
        for(int j=0;j<i;j++){ // loop and check previous values up to current index (array[i])
            if(array[i]==array[j]){ // if previous and current number are the same, there is a duplicate
                size--; // decrease size of array
                for (int k=i; k<size; k++){ // shift every number to the left
                    array[k]=array[k+1];
                }
                i--; // go back and repeat loop
            }
        }
    }
    return size;
}

int main(){
    const int CAPACITY = 20;
    float input;
    int current_size = 0;
    float array[CAPACITY];
    cout << "Enter the values for the array and press Q/q to stop: ";
    while (cin >> input){
        array[current_size] = input;
        current_size++;
    }
    cout << "Your array: ";
    for(int i=0; i < current_size; i++){
        cout << array[i] << " ";
    }
    current_size = remove_duplicates(array, current_size);
    cout << endl << "Your new array without duplicates: ";
    for (int i=0; i<current_size; i++){
        cout << array[i] << " ";
    }
    cout << endl << "New array size: " << current_size;
    return 0;
}