#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    const int CAPACITY = 20;
    bool in_run = false;
    float values[CAPACITY];
    srand(time(0));
    for (int i = 0; i < CAPACITY; i++){
        values[i] = rand() % 6 + 1;;
    }
    for (int i = 0; i < CAPACITY; i++){
        if (in_run){
            if (!(values[i] == values[i-1])){
                cout << ")";
                in_run = false;
            }
        }
        if (!(in_run)){
            if (values[i] == values[i+1]){
                cout << "(";
                in_run = true;
            }
        }
        cout << values[i];
    }
    if (in_run){
        cout << ")" << endl;
    }
    return 0;
}