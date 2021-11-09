#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

bool all_the_same(double x, double y, double z){
    if (x == y && y == z){
        cout << "All of the values are the same." << endl;
        return true;
    }
    else{
        return false;
    }
    // returns true if the arguments are all the same
}

bool all_different(double x, double y, double z){
    // returns true if the arguments are all different
    if (!(x == y) && !(y == z) && !(x == z)){
        cout << "All of the values are different." << endl;
        return true;
    }
    else{
        return false;
    }
}

bool sorted(double x, double y, double z){
    // returns true if the arguments are sorted with the smallest one coming first
    if (x < y && y < z) {
        cout << "All of the values are in order." << endl;
        return true;
    }
    else{
        return false;
    }
}

int main(){   
    double x, y, z;
    bool flag = false;
    cout << "Please enter your first value: ";
    cin >> x;
    cout << "Please enter your second value: ";
    cin >> y;
    cout << "Please enter your third value: ";
    cin >> z;
    flag = all_the_same(x, y, z);
    if (flag == 1){
        return 0;
    }
    flag = sorted(x, y, z);
    if (flag == 1){
        return 0;
    }
    flag = all_different(x, y, z);
    if (flag == 1){
        return 0;
    }
    return 0;
}
