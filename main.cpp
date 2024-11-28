#include <iostream>

using namespace std;

int main(){
    
    int x = 4;
    std::cout << "testing x is set to ... " << x << std::endl;

    char a = 97;
    std::cout << "char 97 is " << a << std::endl;

    auto y = 3456ll; // automatically convert variable to long long
    std::cout << sizeof(y) << std::endl;

    return 0;
}