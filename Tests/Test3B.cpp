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
    int array[CAPACITY];
    int current;
    int longest_length = 1;
    int current_length = 1;
    int index = 0;
    int current_index = 0;
    srand(time(NULL));
    array[0] = rand() % 6 + 1;
    current = array[0];
    for (int i = 1; i < CAPACITY; i++){
        array[i] = rand() % 6 + 1;
        if (current == array[i]){
            current_length++;
        }
        else{
            if (longest_length < current_length){
                longest_length = current_length;
                index = current_index;
            }
            current = array[i];
            current_length = 1;
            current_index = i;
        }
    }
    for (int i =0; i < CAPACITY; i++){
        if (i==index){
            cout << "(" << array[i];
        }
        else if (i == index + longest_length-1){
            cout << array[i] << ")";
        }
        else{
            cout << array[i] << "";
        }
    }
    cout << endl << "The number with the longest run was " << array[index] << " with a length of " << longest_length;
    return 0;
}
