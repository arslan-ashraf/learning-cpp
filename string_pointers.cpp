#include <iostream>

using namespace std;

int main(){

    char some_character = 'x';
    char *pointer_some_character = &some_character;

    cout << "The pointer itself points to the value: " << pointer_some_character << endl;
    cout << "Dereferencing the pointer also points to the value: " << *pointer_some_character << endl;


///////////////////////////////////
/////////////  STRING /////////////
///////////////////////////////////

    // looping through constant string with pointer, note: string here is a constant
    const char *pointer_string_constant = "this is a string\0";

    cout << "pointer_string_constant the whole string: " << pointer_string_constant << endl;
    cout << "*pointer_string_constant points to first letter: " << *pointer_string_constant << endl;

    while (*pointer_string_constant != '\0'){
        cout << *pointer_string_constant;
        pointer_string_constant += 1;
    }


///////////////////////////////////////////////////////
///////////// CHANGEABLE ARRAY OF STRINGS /////////////
///////////////////////////////////////////////////////

    const char *array_of_strings[] = { "one", "two", "three", "four" };

    cout << "array_of_strings points to an address: " << array_of_strings << endl;
    cout << "*array_of_strings points is the first element: " << *array_of_strings << endl;

    // prints one by one
    for (const char * string : array_of_strings){
        cout << string << endl;
    }

    // array_of_strings' last value is changed
    const char * new_character = "zero";
    array_of_strings[3] = new_character;

    cout << endl;
    for (const char * string : array_of_strings){
        cout << string << endl;
    }


///////////////////////////////////////////////////////////
///////////// NON CHANGEABLE ARRAY OF STRINGS /////////////
///////////////////////////////////////////////////////////

    // change the array above to put const after the *
    const char *array_of_strings[] = { "one", "two", "three", "four" };

    // now the array_of_strings is not modifiable, note: removing the left most const
    // could produce warnings but not a compiler error
    const char * const array_of_strings[] = { "one", "two", "three", "four" };

    return 0;
}


// looping through a string
void my_print(char string[]){ // char string[] is the same as char *string
    int i = 0;
    while(*(string + i) != '\0'){
    // while(string[i] != '\0'){ // same while loop
        cout << string[i]; // string[i] is the same as *(string + i)
        i += 1;
    }
}

int main(){

    char example_string[] = "this is an example string\0";

    my_print(example_string);

    return 0;
}