#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

float sum(float data[], int size){
    float total = 0;
    for (int i = 0; i< size; i++){
        total += data[i];
    }
    return total;
}

int main(){
    float total = 0;
    int count = 0;
    float avg = 0;
    float max = -99;
    float min = 999;
    int size = 0;
    float values[] = {32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65};
    for (int i = 0; i<10; i++){
        count++;
        cout << "values[ " << i << " ] = " << values [i] << endl;
        if (values[i] > max){
            max = values[i];
        }
        if (values[i] < min){
            min = values[i];
        }
    }
    size = count;
    cout << "Total = " << sum(values, size) << endl;
    avg = sum(values, size) / count;
    cout << "Average = " << avg << endl;
    cout << "Largest value = " << max << endl;
    cout << "Smallest value = " << min << endl;
    system("pause");
    return 0;
}