#include <iostream>

using namespace std;

int main(){

    char some_character = 'x';
    char *pointer_some_character = &some_character;

    cout << "The pointer itself points to the value: " << pointer_some_character << endl;
    cout << "Dereferencing the pointer also points to the value: " << *pointer_some_character << endl;


    // looping through constant string with pointer, note: string here is a constant
    const char *pointer_string_constant = "this is a string\0";

    cout << "pointer_string_constant points to first letter: " << *pointer_string_constant << endl;

    while (*pointer_string_constant != '\0'){
        cout << *pointer_string_constant;
        pointer_string_constant += 1;
    }

    return 0;
}