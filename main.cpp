#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// another way to write my_print()
void my_print(char string[]){
    while(*string != '\0'){
        cout << *string; // string is a pointer
        string += 1;
    }
}

int main(){

    char example_string[] = "this is an example string\0";

    my_print(example_string);

    return 0;
}