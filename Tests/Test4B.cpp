#include <iostream>

using namespace std;

double* maximum(double* a, int size){
    if (size == 0){
        return NULL;
    }
    double* max_pos = a;
    double max_value = 0.0;
    for (int i = 0; i < size; i++){
        if (*a > max_value){
            max_value = *a;
            max_pos = a;
        }
        a++;
    }
    return max_pos;
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
    double* max = maximum(array, size);
    cout << endl << "Your array's max value: " << *max << endl;;
    return 0;
}