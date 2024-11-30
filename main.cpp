#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void my_print(char string[]){
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