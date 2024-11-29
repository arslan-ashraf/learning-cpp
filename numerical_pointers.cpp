#include <iostream>

using namespace std;

int main(){

/*
    The pointer is created with an *pointer_name, and it must be of the same data type as 
    the variable its pointing to. The pointer is derefenced by *pointer_name to get the value.
    The value of the pointer is an address, e.g., pointer_name = 0x4a3f9c and to dereference,
    *pointer_name = 4.
*/
    int x = 9;
    double y = 4.984;
    int *pointer_x = &x;
    double *pointer_y = &y;

    cout << "address of x: " << pointer_x << endl;
    cout << "size of pointer_x: " << sizeof(pointer_x) << endl;
    cout << "address of y: " << pointer_y << endl;
    cout << "size of pointer_y: " << sizeof(pointer_y) << endl;

////////////////////////////////////////////////////////////
//////// CONST POINTERS AND POINTERS TO CONSTANTS //////////
////////////////////////////////////////////////////////////
/* 
    If the variable is constant, then only constant pointers can point to them.
    However, constant pointers can be changed, if it points to one variable, 
    it can be changed to point to some other variable of the same type even
    if the new variable is not constant.
*/
    
    const double integer_constant = 5.9;
    const double *pointer_integer_constant = &integer_constant;
    cout << "integer_constant: " << integer_constant << endl;
    cout << "pointer_integer_constant: " << *pointer_integer_constant << endl;

    double different_variable = 4.8;
    pointer_integer_constant = &different_variable;

    cout << "const pointer now points to different_variable, pointer_integer_constant: " << *pointer_integer_constant << endl;

    return 0;
}