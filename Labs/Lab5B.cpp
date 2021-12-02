/*
Prolog
a.  Program Description: Program that takes a user's inputs for two arrays and combines the two array's elements and displays it
b.  Author: Ethan Santos
c.  Date: December 2, 2021
d.  Input variables: "input" float variable that is stored into an array
e.  Process Flow: Program takes the user's input for two arrays using the read_data function which uses pointers to manipulate and add elements
to the array. The program then prints back the entire array. After creating the 2 arrays, the program combines both arrays into one new array 
using for loops and displays the new array.
f.  Output variables: pointer int variable (size)
*/

#include <iostream>
using namespace std;

int* read_data(float* array, int& size){
    float input;
    float* p = array;
    cout << endl << "Enter values for the array and press Q/q to stop: ";
    while (cin >> input){
        array[size] = input;
        size++;
    }
    return &size;
}

void display_array(string message, float array[], int size){
    cout << message;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

int main(){
    const int CAPACITY = 20;
    int first_size = 0;
    int second_size = 0;
    float first_array[CAPACITY];
    float second_array[CAPACITY];
    float combined_array[CAPACITY];
    read_data(first_array, first_size);
    display_array("First array: ", first_array, first_size);
    cin.clear();
    cin.ignore();
    read_data(second_array, second_size);
    display_array("Second array: ", second_array, second_size);
    // create new array
    int total_size = second_size + first_size;
    cout << endl << "New combined size: " << (total_size) << endl;
    for (int i = 0; i < first_size; i++){
        combined_array[i] = first_array[i];
    }
    for (int i = 0; i < second_size; i++){
        combined_array[i+first_size] = second_array[i];
    }
    display_array("New combined array: ", combined_array, total_size);
    return 0;
}

