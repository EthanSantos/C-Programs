/*
Prolog
a.  Program Description: Program generates 2 columns of random numbers and displays the averages in another created file.
b.  Author: Ethan Santos
c.  Date: December 9, 2021
d.  Input variables: File names (strings)
e.  Process Flow: Program asks the user to input file names to create a file that stores the randomly generated numbers. Two sets of 10 random numbers are generated
and displayed in the output and stored in the files. The random numbers are added up and divided by 10 to display the average of each column.
f.  Output variables: first_average and second_average (float variables)
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    string filename;
    string filename2;
    ofstream out_file;
    ofstream out_file2;
    cout << "Please enter the file name to store the original numbers in: ";
    cin >> filename;
    cout << "Please enter the file name to display the table of numbers with the averages of each column: ";
    cin >> filename2;
    out_file.open(filename.c_str());
    out_file2.open(filename2.c_str());
    cout << "Random Numbers 1 " << "Random Numbers 2" << endl;
    out_file2 << "Random Numbers 1 " << "Random Numbers 2" << endl;
    out_file << "Random Numbers 1 " << "Random Numbers 2" << endl;
    out_file << "---------------- " << "----------------" << endl;
    srand(time(NULL));
    float first_average = 0;
    float second_average = 0;
    for(int i = 0; i < 10;i++){
        int first_value = rand() % (20 - 10) + 10;
        int second_value = rand() % (20 - 10) + 10;
        first_average += first_value;
        second_average += second_value;
        cout << setw (9) << first_value << setw(8) << "|" << setw (8) << second_value << endl;
        out_file2 << setw (9) << first_value << setw(8) << "|" << setw (8) << second_value << endl;
        out_file << setw (9) << first_value << setw(8) << "|" << setw (8) << second_value << endl;
    }
    out_file << "First column average: " << first_average/10 << endl;
    out_file << "Second column average: " << second_average/10 << endl;
    out_file.close();
    out_file2.close();
    system("pause");
    return 0;
}