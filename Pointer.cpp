#include <iostream>
using namespace std;

double sum(double* a, int size){
    double total = 0;
    double* p = a;
    // p starts at the beginning of the array
    for (int i = 0; i < size; i++){
        total = total + *p;
        // Add the value to which p points
        p++;
        // Advance p to the next array element
    }
    return total;
}

int main(){
    float total = 0;
    int count = 0;
    float avg = 0;
    float max = -999;
    float min = 999;
    int size = 0;
    double values[] = { 32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65 };
    for (int i = 0; i < 10; ++i){
        count++;
        cout << "values[ " << i << " ] = " << values[i] << endl;
        if (values[i] > max)
        max = values[i];
        if (values[i] < min)
        min = values[i];
    }
    size = count;
    cout << "Total = " << sum(values, size) << endl;
    avg = sum(values, size) / count;
    cout << "Average = " << avg << endl;
    cout << "Largest value = " << max << endl;
    cout << "Smallest value = " << min << endl;
    //print the new array
    system("pause");
    return 0;
}