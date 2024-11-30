#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void callback_test(int x){
    cout << "callback test working, x is: " << x << endl;
}

void some_function(void (*pointer_callback_test)(int), int x){
    pointer_callback_test(x);
}

int main(){

    // void (*p)(int) = &callback_test;
    void (*pointer_to_function)(int) = callback_test;
    
    some_function(pointer_to_function, 0);
    
    return 0;
}