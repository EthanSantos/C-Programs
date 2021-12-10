#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    float value;
    float total = 0;
    float count = 0;
    float average;
    string filename;
    ifstream in_file;
    ofstream out_file;
    cout << "Please enter the file name: ";
    cin >> filename;
    in_file.open(filename.c_str());
    if (in_file.fail()){
        cout << "File not found" << endl;
        return 1;
    }
    out_file.open("D:\\output.txt");
    cout << "Your input values: ";
    out_file << "Your input values: ";
    while (in_file >> value){
        total += value; 
        count++;
        cout << value << " ";
        out_file << value << " ";
    }
    average = total/count;
    cout << endl << "The total of your values is " << total << endl;
    out_file << endl << "The total of your values is " << total << endl;
    cout << "The average of your values is " << average << endl;
    out_file << "The average of your values is " << average << endl;
    in_file.close();
    out_file.close();
    system("pause");
    return 0;
}