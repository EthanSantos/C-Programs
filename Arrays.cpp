#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    int number = 0;
    int position = 0;
    int size = 0;
    float total = 0;
    float avg = 0;
    float values[] = {32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65};
    float max = values[0];
    float min = values[0];
    for (int i = 0; i < 10; i++){
        total += values[i];
        count++;
        cout << "values[" << i << "] = " << values[i] << endl;
        if (values[i] > max){
            max = values[i];
        }
        if (values[i] < min){
            min = values[i];
        }
    }
    cout << "Total = " << total << endl;
    avg = total / count;
    cout << "Average = " << avg << endl;
    cout << "Largest value " << max << endl;
    cout << "Smallest value = " << min << endl;

    cout << "Please enter a number to do a linear search: ";
    cin >> number;
    for (int i = 0; i < 10; i++){
        if (values[i] == number){
            position = i + 1;
            break;
        }
    }
    if (position == 0){
        cout << "Number not found!" << endl;
        return 1;
    }
    else{
        cout << "Position = " << position << endl;
    }
    values[position-1] = values[size-1];
    size--;
    for (int i =  0; i < size; i++){
        cout << "values[ " << i << " ] = " << values[i] << endl;
    }
    system("pause");
    return 0;
}