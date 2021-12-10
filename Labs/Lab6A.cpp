/*
Prolog
a.  Program Description: Program takes a file called babynames.txt and displays how many lines were processed in the console
b.  Author: Ethan Santos
c.  Date: December 9, 2021
d.  Input variables: none
e.  Process Flow: The program opens the babynames.txt file and creates an output.txt file to display all of the names from the file and their rank.
The names are processed by a function called process_name that takes in 3 parameters, in_file, out_file, and total. This function is ran multiple times until every line
is processed.
f.  Output variables: rank and records (integers)
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
   Reads name information, prints the name if total >= 0, and adjusts the total.
   @param in_file the input stream
   @param total the total percentage that should still be processed
*/

void process_name(ifstream& in_file, ofstream& out_file, double& total){
   string name;
   int count;
   double percent;
   in_file >> name >> count >> percent;
   if (in_file.fail()) { 
      return; 
   }
   if (total > 0){ 
       out_file << name << " "; 
   }
   total = total - percent;
}

int main(){  
    ifstream in_file;
    ofstream out_file;
    in_file.open("D:\\babynames.txt");
    out_file.open("D:\\output.txt");
    if (in_file.fail()){ 
        return 0; 
    }
    int records = 0;
    double boy_total = 50;
    double girl_total = 50;
    while (boy_total > 0 || girl_total > 0){
      int rank;
      in_file >> rank;
      if (in_file.fail()) { 
         return 0; 
      } 
      
      out_file << rank << ". ";
      process_name(in_file, out_file, boy_total);
      process_name(in_file, out_file, girl_total);
      out_file << endl;
      records ++;
    }
    cout << "Total records processed: " << records;
    return 0;
}