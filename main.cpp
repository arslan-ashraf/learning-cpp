#include <iostream>

using namespace std;

int main(){

    int x = 9;
    // const int *pointer_x = &x;
    int * const pointer_x = &x;
    int y = 8;
    pointer_x = &y;

    cout << *pointer_x;

    return 0;
}