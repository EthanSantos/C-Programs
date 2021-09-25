#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

char characters[] = 
     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
     "abcdefghijklmnopqrstuvwxyz";

char random_character(){
    int stringLength = sizeof(characters) - 1;
    return characters[rand() % stringLength]; 
}

void append(char* s, char c){
    int len = strlen(s);
    s[len] = c;
    s[len+1] = '\0';
}

void generate_password(){
    string password;
    char numbers[9] = "12345678";
    string special_characters;
    int length;

    cout << "How long do you want the password to be? ";
    cin >> length;
    cout << "Do you want special characters? (yes/no) ";
    cin >> special_characters;

    if (special_characters == "yes"){
        for (int i = 0; i < 9; i++){
            append(characters, numbers[i]);
        }
    }
    else{

    }
    
    for (int i = 0; i < length; i++){
        password += random_character();
    }

    cout << password + " is your password" << endl;
}

int main(){
    while (true){
        generate_password();
    }
    system("pause");
    return 0;
}