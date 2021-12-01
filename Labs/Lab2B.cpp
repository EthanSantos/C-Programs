/*
Prolog
a.  Program Description: Program that displays the syllables of given word inputs.
b.  Author: Ethan Santos
c.  Date: October 19, 2021
d.  Input variables: strings (words)
e.  Process Flow: Command line takes 4 inputs for words and calculates the syllables by looping through the string and counting the vowels. If a vowel
is next to each other, it skips one of them. If the syllables are 0 by the end of the loop, the syllables are set to 1. The loop skips the last letter 
if it is 'E'.
f.  Output variables: word and syllable variables
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string getWord(){
    string word;
    cout << "Input your word: ";
    cin >> word;
    return word;
}

int getSyllables(string word){
    int syllables = 0;
    for (int i = 0; i < word.length(); i++) {
        // loop through each letter
        if (!(i == (word.length()-1) && word[i] == 'e')){ // if last letter is not E
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
                syllables += 1;
                i++;
            }
        }
    }
    if (syllables == 0) {
        syllables = 1;
    }
    return syllables;
}

string getSpaces(string word){
    int amount = 0;
    amount = (20 - word.length());
    string spaces;
    for (int i = 0; i < amount; i++){
        spaces += " ";
    }
    return spaces;
}

int main(){
    string word = getWord();
    string word2 = getWord();
    string word3 = getWord();
    string word4 = getWord();
    cout << "WORDS           SYLLABLES" << endl;
    cout << "-------------------------" << endl;
    int syllables = getSyllables(word);
    int syllables2 = getSyllables(word2);
    int syllables3 = getSyllables(word3);
    int syllables4 = getSyllables(word4);
    cout << word << getSpaces(word) << syllables << endl;
    cout << word2 << getSpaces(word2) << syllables2 << endl;
    cout << word3 << getSpaces(word3) << syllables3 << endl;
    cout << word4 << getSpaces(word4) << syllables4 << endl;
    return 0;
}