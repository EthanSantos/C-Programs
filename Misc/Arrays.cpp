#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    float input;
    const int CAPACITY = 20;
    int current_size = 0;
    float values[CAPACITY];
    cout << "Please enter a string of real numbers and enter a Q/q to stop: ";
    while (cin >> input){
        values[current_size] = input;
        current_size++;
    }
    for (int i = 0; i < current_size; i++){
        cout << "values [" << i << "] = " << values[i] << endl;
    }
    system("pause");
    return 0;
}