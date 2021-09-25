#include <iostream>
#include <string>
using namespace std;

int main()
{
    const size_t numStrings = 7;
    size_t count = 0;

    string s[ numStrings ];

    cout << "\nEnter " << numStrings << " one-word string values:\n";

    while (count < numStrings) {
        cin >> s[ count ];
        count++;
    }



    return 0;
}